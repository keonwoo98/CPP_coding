#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private :
	char *name;
	int age;
public :
	Person(char *myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	// 아래와 같이 별도의 복사 생성자가 정의않으면 디폴트 복사 생성자가 호출되고 얕은 복사(맴버 대 맴버)가 진행된다.
	// 그러면 생성자 소멸 시 하나의 name 문자열을 대상으로 2번 delete 연산이 호출되기 때문에 컴파일 에러가 발생한다.
	Person(const Person &copy) : age(copy.age)
	{
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}
	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person()
	{
		delete []name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man1((char *)"Kim name", 25);
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}
