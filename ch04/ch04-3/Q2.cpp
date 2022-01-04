#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS
{
	enum { CLERK, SENIOR, ASSIST, MANAGER };

	void ShowPositionInfo(int pos)
	{
		switch(pos)
		{
		case CLERK :
			cout << "사원" << endl;
			break ;
		case SENIOR :
			cout << "주임" << endl;
			break ;
		case ASSIST :
			cout << "대리" << endl;
			break ;
		case MANAGER :
			cout << "과장" << endl;
			break ;
		}
	}
}

class NameCard
{
private :
	char *name;
	char *company;
	char *phone;
	int rank;

public :
	NameCard(char *n, char *c, char *p, int r)
	{
		int len;
		len  = strlen(n) + 1;
		name = new char[len];
		strcpy(name, n);

		len = strlen(c) + 1;
		company = new char[len];
		strcpy(company, c);

		len = strlen(p) + 1;
		phone = new char[len];
		strcpy(phone, p);

		rank = r;
	}
	void ShowNameCardInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "회사: " << company << endl;
		cout << "전화번호: " << phone << endl;
		cout << "직급: ";
		COMP_POS::ShowPositionInfo(rank);
		cout << endl;
	}
	~NameCard()
	{
		delete []name;
		delete []company;
		delete []phone;
	}
};



int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSenior("Hong", "OrangeENG", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSenior.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	return 0;
}
