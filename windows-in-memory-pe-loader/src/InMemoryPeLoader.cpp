#include <fstream>
#include "InMemoryPeLoader.h"

std::vector<char> InMemoryPeLoader::ReadFileFromDisk(std::wstring aFileName)
{
	std::streampos lFileSize;
	std::fstream file(aFileName.c_str(), std::ios::in | std::ios::binary | std::ios::ate);

	if (!file.is_open())
	{
		throw InvalidArgument();
	}
	
	lFileSize = file.tellg();

	auto lFileContent = std::vector<char>(lFileSize);

	if (lFileContent.capacity() < lFileSize)
	{
		throw FailedToAllocMemory();
	}

	file.seekg(0, std::ios::beg);
	file.read(lFileContent.data(), lFileSize);
	file.close();

	return lFileContent;
	
}
