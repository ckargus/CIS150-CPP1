#ifndef Triangle_h
#define Triangle_h
class Triangle
{
public:
	float GetHeight() const;
	float GetBase() const;
	void SetBase(float);
	void SetHeight(float);
	void SetArea(float,float);
	float GetArea() const;
private:
	float height;
	float base;
	float area;
};
#endif