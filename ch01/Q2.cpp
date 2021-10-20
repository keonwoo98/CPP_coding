#include <iostream>

int			main(void)
{
	char	name[20], p_num[20];

	std::cout<<"이름을 입력하세요: ";
	std::cin>>name;

	std::cout<<"전화번호를 입력하세요: ";
	std::cin>>p_num;

	std::cout<<"이름: "<<name<<std::endl;
	std::cout<<"전화번호: "<<p_num<<std::endl;
	return 0;
}