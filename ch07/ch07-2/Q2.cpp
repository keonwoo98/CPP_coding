#include <iostream>
using namespace std;

class MyFriendInfo
{
private :
	char *name;
	int age;
public :
	void ShowMyFriendInfo()
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
};

class MyFriendDetailInfo : public MyFriendInfo
{
private :
	char *addr;
	char *phone;
public :
	void ShowMyFriendDetailInfo()
	{
		ShowMyFriendInfo();
		cout << "주소: " << addr << endl;
		cout << "전화: " << phone << endl << endl;
	}
};
