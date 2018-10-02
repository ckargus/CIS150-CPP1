#include <iostream>
#include <string>
#include <cctype>
#include <stdexcept>
using namespace std;

void GetInput(string MainScreenInput);

double Abs(double num1)
{
	if (num1 < 0)
	{
		num1 *= -1;
	}
	return num1;
}

int Mod(int num1, int& num2) // function that takes in two numbers and takes the remainder
{
	while (num2 == 0)
	{
		cout << "Can't modulus by zero please use another number ";
		cin >> num2;
	}
	return num1 % num2;
}

int GCD(int num1, int num2) // finds the greatest number that two numbers can be divided by 
// used the given algerithm to find it.
{
	if (num1 == 0 || num2 == 0)
	{
		cout << "Error can't use zero " << endl;
		return -1;
	}
	while (num1 != num2)
	{
		if (num1 > num2)
		{
			num1 -= num2;
		}
		else
		{
			num2 -= num1;
		}
	}
	return num1;
}

int LCM(int num1, int num2) // finds the lowest common multiple of two numbers used the given algerithm to find it
{
	if (num1 != 0 && num2 != 0)
	{
		return num1 * num2 / GCD(num1, num2);
	}
	else
	{
		return 0;
	}
}

double Percent(double num1, double num2) // takes a given number and finds a given percent of the number.
{
	num2 /= 100;
	return num1 * num2;
}

double Power(double num1, int num2) // takes a number and puts it to a power using a looping as many times as the power.
{
	if (num1 < 0 || num2 < 0)
	{
		cout << "This function can't work with negative numbers " << endl;
		return -1;
	}
	int result = 1;
	for (int i = 0; i < num2; i++)
	{
		result *= num1;
	}
	return result;
}
/*
Takes an number and an index to root it to. used the algorithm handed to use to find it. basically just takes
the mind point raises it to the power of the root index and then if it's not super close to the value of the number being rooted
will take the midpoint of the mid point. Has a handler to go back to the get input function if the user enters a value less than
or equal to zero.
*/
double Root(double num1, double num2)
{
	if (num1 < 0 || num2 <= 0)
	{
		cout << "This function can't work with negative numbers or zero for an index " << endl;
		return -1;
	}
	double low = 0.0;
	double high = num1;
	double mid = (high + low) / 2;
	while (Abs(pow(mid, num2) - num1) > .000005)
	{
		if (pow(mid, num2) > num1)
		{
			high = mid;
		}
		else
		{
			low = mid;
		}
		mid = (high + low) / 2;
	}
	return mid;
}

/*
This function divides the two numbers entered and if the denominator is equal to 0
return the function to the GetInput function with -1 to show an error.
*/
double Divison(double num1, double& num2)
{
	if (num2 == 0)
	{
		do{

			cout << "Error can't divide by zero please enter another number: " << endl;
			cin >> num2;
		} while (num2 == 0);
		return num1 / num2;
	}
	else
	{
		return num1 / num2;
	}

}

double Multiplication(double num1, double num2)
{
	return num1 * num2;
}

double Subtraction(double num1, double num2)
{
	return num1 - num2;
}

void OperationHeader(string Operation)
// Generates the header for all of the operations
{
	cout << "=============================================" << endl;
	cout << "               " << Operation << " Operator" << endl;
	cout << "=============================================" << endl;
}

double Addition(double num1, double num2)
{
	return num1 + num2;
}

void GetInput(string MainScreenInput)
{
	string input1 = "";
	string input2 = "";
	double num1 = 0;
	double num2 = 0;
	double total = 0;

	/*
	The following code is many different ways to ask the user for two different numbers depending
	on what operation the selected on the main screen. I then take the input from the string format and convert it
	to a double and used a try catch statement in case anything goes wrong so the program won't crash.
	NOTE: I am sorry if try catch statements are not allowed. I know we didn't cover them but I did know how
	to use them and it seems liked the best way to do it.
	*/
	cout << "Enter @ to go back." << endl;
	if (MainScreenInput != "E" && MainScreenInput != "F")
	{
		cout << "Please provide the first number ";
	}
	else if (MainScreenInput == "E")
	{
		cout << "Enter the number you would like rooted: ";
	}
	else if (MainScreenInput == "F")
	{
		cout << "Enter the number you would like to have to a power: ";
	}
	cin >> input1;
	if (input1 == "@")
	{
		return;
	}
	if (MainScreenInput != "E" && MainScreenInput != "F" && MainScreenInput != "G")
	{
		cout << "Please provide the second number ";
	}
	else if (MainScreenInput == "E")
	{
		cout << "To what number do you want the number to be rooted to: ";
	}
	else if (MainScreenInput == "F")
	{
		cout << "To what power do you want the number to: ";
	}
	else if (MainScreenInput == "G")
	{
		cout << "What percent of the number would you like to find: ";
	}
	cin >> input2;
	if (input2 == "@")
	{
		return;
	}
	try
	{
		num1 = stod(input1);
		num2 = stod(input2);
	}
	catch (...)
	{
		cout << "Invalid input" << endl;
		GetInput(MainScreenInput);
		return;
	}
	/*
	Code will call the different mathematical functions depending on what the user selected on the
	main screen and display the result. Then run the same operation again unless the user uses the escape
	character.
	*/
	if (MainScreenInput == "A")
	{
		total = Addition(num1, num2);
		cout << "The result of " << num1 << " + " << num2 << " = " << total << endl;
	}
	else if (MainScreenInput == "B")
	{
		total = Subtraction(num1, num2);
		cout << "The result of " << num1 << " - " << num2 << " = " << total << endl;
	}
	else if (MainScreenInput == "C")
	{
		total = Multiplication(num1, num2);
		cout << "The result of " << num1 << " * " << num2 << " = " << total << endl;
	}
	else if (MainScreenInput == "D")
	{
		total = Divison(num1, num2);
		cout << "The result of " << num1 << " / " << num2 << " = " << total << endl;
	}
	else if (MainScreenInput == "E")
	{
		total = Root(num1, num2);
		if (total >= 0)
			cout << "The root of " << num1 << " by root " << num2 << " = " << total << endl;
	}
	else if (MainScreenInput == "F")
	{
		total = Power(num1, static_cast<int>(num2));
		if (total >= 0)
			cout << "The power of " << num1 << " to " << static_cast<int> (num2) << " = " << total << endl;
	}
	else if (MainScreenInput == "G")
	{
		total = Percent(num1, num2);
		cout << num2 << "% of " << num1 << " = " << total << endl;
	}
	else if (MainScreenInput == "H")
	{
		total = LCM(static_cast<int>(num1), static_cast<int>(num2));
		cout << "The least common multiplier of " << static_cast<int>(num1) << " and " << static_cast<int>(num2) << " is " << total << endl;
	}
	else if (MainScreenInput == "I")
	{
		total = GCD(static_cast<int>(num1), static_cast<int>(num2));
		if (total >= 0)
			cout << "The greatest common divisor between " << static_cast<int>(num1) << " and " << static_cast<int>(num2) << " is " << total << endl;
	}
	else if (MainScreenInput == "J")
	{
		int temp = num2;
		total = Mod(num1, temp);
		cout << "The modulus of " << num1 << " by " << temp << " is " << total << endl;
	}

	GetInput(MainScreenInput);
}


void startScreen()
{
	/*
	Displays the main menu of the program and will pass what the user has entered for an option
	to the GetInput function which will ask for two numbers and decide what calculation function
	it should use.
	*/
	string input = "";
	cout << "=============================================" << endl;
	cout << "           Welcome to calculator 2.0" << endl;
	cout << "=============================================" << endl;
	cout << "A.) Addition" << endl;
	cout << "B.) Subtraction" << endl;
	cout << "C.) Multiplication" << endl;
	cout << "D.) Division" << endl;
	cout << "E.) Roots" << endl;
	cout << "F.) Power" << endl;
	cout << "G.) Percentage" << endl;
	cout << "H.) Least Common Multiplier" << endl;
	cout << "I.) Greatest Common Divisor" << endl;
	cout << "J.) Modulus" << endl;
	cout << "@.) Quit" << endl;

	cin >> input;
	input[0] = toupper(input[0]);
	if (input == "@")
	{
		return;
	}
	else if (input == "A")
	{
		OperationHeader("Addition");
		GetInput(input);
	}
	else if (input == "B")
	{
		OperationHeader("Subtraction");
		GetInput(input);
	}
	else if (input == "C")
	{
		OperationHeader("Multiplication");
		GetInput(input);
	}
	else if (input == "D")
	{
		OperationHeader("Division");
		GetInput(input);
	}
	else if (input == "E")
	{
		OperationHeader("Root");
		GetInput(input);
	}
	else if (input == "F")
	{
		OperationHeader("Power");
		GetInput(input);
	}
	else if (input == "G")
	{
		OperationHeader("Percent");
		GetInput(input);
	}
	else if (input == "H")
	{
		OperationHeader("Least Common Multiplier");
		GetInput(input);
	}
	else if (input == "I")
	{
		OperationHeader("Greatest Common Divisor");
		GetInput(input);
	}
	else if (input == "J")
	{
		OperationHeader("Modulus");

		GetInput(input);
	}
	else
	{
		cout << "Invalid Selection" << endl;
	}
	startScreen();
}

int main()
{
	startScreen();
	cout << "Thank you for using calculator 2.0! ";
	system("pause>nuls");
	return 0;
}
