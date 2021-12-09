#include <iostream>
using namespace std;

void		Ref_Add_one(int &num)
{
	num++;
}

void		Ref_Chg_sign(int &num)
{
	num *= -1;
}

int			main(void)
{
	int		num1 = 100;

	Ref_Add_one(num1);
	cout << "num1: " << num1 << endl;
	Ref_Chg_sign(num1);
	cout << "num1: " << num1 << endl;
	return 0;
}
