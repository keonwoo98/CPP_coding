#include <iostream>
using namespace std;

class Calculator
{
private :
	int		Add_cnt;
	int		Min_cnt;
	int		Mul_cnt;
	int		Div_cnt;
public :
	void	Init();
	double	Add(double n1, double n2);
	double	Min(double n1, double n2);
	double	Mul(double n1, double n2);
	double	Div(double n1, double n2);
	void	ShowOpCount();
};

void	Calculator::Init()
{
	Add_cnt = 0;
	Min_cnt = 0;
	Mul_cnt = 0;
	Div_cnt = 0;
}

double	Calculator::Add(double n1, double n2)
{
	Add_cnt++;
	return n1 + n2;
}

double	Calculator::Min(double n1, double n2)
{
	Min_cnt++;
	return n1 - n2;
}

double	Calculator::Mul(double n1, double n2)
{
	Mul_cnt++;
	return n1 * n2;
}

double	Calculator::Div(double n1, double n2)
{
	Div_cnt++;
	return n1 / n2;
}

void	Calculator::ShowOpCount()
{
	cout << "덧셈: " << Add_cnt << ' ';
	cout << "뺄셈: " << Min_cnt << ' ';
	cout << "곱셈: " << Mul_cnt << ' ';
	cout << "나눗셈: " << Div_cnt << endl;
}

int		main(void)
{
	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();
	return 0;
}
