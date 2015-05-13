#include <iostream>
#include <string>
#include "md5.h"

int main()
{

	std::string text = "Hi There";
	std::string hash = get_md5(text);

	std::cout << text << " " << hash << std::endl; 

	return 0;
}