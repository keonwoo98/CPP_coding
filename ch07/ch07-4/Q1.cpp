#include <iostream>
using namespace std;

class Rectangle
{
private :
	int w;
	int h;
public :
	Rectangle(int width, int height) : w(width), h(height)
	{ }
	void ShowAreaInfo()
	{
		cout << "면적: " << w * h << endl;
	}
};

class Square : public Rectangle
{
public :
	Square(int side) : Rectangle(side, side)
	{ }
};

int main(void)
{
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();
	return 0;
}
