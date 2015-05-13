#include <iostream>
#include <string>
#include "md5.h"

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		std::cout << "md5 <text>" << std::endl;
		return -1;
	}	

	std::string text = argv[1];
	std::string hash = get_md5(text);

	std::cout << text << " " << hash << std::endl; 

	return 0;
}