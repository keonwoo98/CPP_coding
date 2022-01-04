#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	void Init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Circle
{
private :
	Point pos;
	int radius;

public :
	void Init(int x, int y, int rad)
	{
		pos.Init(x, y);
		radius = rad;
	}
	void ShowCircleInfo() const
	{
		cout << "radius: " << radius << endl;
		pos.ShowPointInfo();
	}
};

class Ring
{
private :
	Circle ic, oc;

public :
	void Init(int ic_x, int ic_y, int ic_radius, int oc_x, int oc_y, int oc_radius)
	{
		ic.Init(ic_x, ic_y, ic_radius);
		oc.Init(oc_x, oc_y, oc_radius);
	}
	void ShowRingInfo() const
	{
		cout << "Inner Circle Info..." << endl;
		ic.ShowCircleInfo();
		cout << "Outter Circle Info..." << endl;
		oc.ShowCircleInfo();
	}
};

int main(void)
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}
