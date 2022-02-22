#include <iostream>
#include <cstring>
using namespace std;

class MyFriendInfo
{
private :
	char *name;
	int age;
public :
	MyFriendInfo(char *friname, int friage) : age(friage)
	{
		name = new char[strlen(friname) + 1];
		strcpy(name, friname);
	}
	~MyFriendInfo()
	{
		delete []name;
	}
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
	MyFriendDetailInfo(char *friname, int friage, char *friaddr, char *friphone)
		: MyFriendInfo(friname, friage)
	{
		addr = new char[strlen(friaddr) + 1];
		phone = new char[strlen(friphone) + 1];
		strcpy(addr, friaddr);
		strcpy(phone, friphone);
	}
	~MyFriendDetailInfo()
	{
		delete []addr;
		delete []phone;
	}
	void ShowMyFriendDetailInfo()
	{
		ShowMyFriendInfo();
		cout << "주소: " << addr << endl;
		cout << "전화: " << phone << endl << endl;
	}
};

int main(void)
{
	MyFriendDetailInfo info("Kim", 25, "Seoul", "1234");
	info.ShowMyFriendDetailInfo();
	return 0;
}
