#include <iostream>
#include <cstdlib>
using namespace std;

int			main(void)
{
	char	str1[] = "Coding";
	char	str2[] = " Cpp";
	char	str3[20];
	
	cout << "str1_len: " << strlen(str1) << endl;
	cout << strcpy(str3, str1) << endl;
	if (strcmp(str1, str3) == 0)
		cout << "same" << endl;
	else
		cout << "different" << endl;
	cout << strcat(str3, str2) << endl;
	if (strcmp(str1, str3) == 0)
		cout << "same" << endl;
	else
		cout << "different" << endl;
	return 0;
}
