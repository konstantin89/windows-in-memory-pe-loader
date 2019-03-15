#include <iostream>

#include "InMemoryPeLoader.h"

int main()
{
	try 
	{
		auto lFileContent = InMemoryPeLoader::ReadFileFromDisk(L"c:\\Windows\\notepad.exe");
	}
	catch (FailedToAllocMemory& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	catch (InvalidArgument& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}


    std::cout << "Hello World!\n"; 
}
