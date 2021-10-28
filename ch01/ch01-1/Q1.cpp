#include <iostream>

int			main(void)
{
	int		num;
	int		add = 0;
	
	for (int i = 0; i < 5; i++)
	{
		std::cout << i + 1 << "번째 정수 입력: ";
		std::cin >> num;
		add += num;
	}
	std::cout << "합계: " << add << std::endl;
	return 0;
}