#include <iostream>

template <typename T>
inline T	SQURE(T x)
{
	return x * x;
}

int			main(void)
{
	std::cout << SQURE(5.5) << std::endl;
	std::cout << SQURE(12) << std::endl;
	return 0;
}
