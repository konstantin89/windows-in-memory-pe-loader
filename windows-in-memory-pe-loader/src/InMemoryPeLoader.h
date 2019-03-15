#pragma once 

#include <Windows.h>
#include <vector>
#include <string>

#include "exceptions/FailedToAllocMemory.h"
#include "exceptions/InvalidArgument.h"

class InMemoryPeLoader
{
public:

	/**
	*
	*@throws: FailedToAllocMemory, InvalidArgument
	*/
	static std::vector<char> ReadFileFromDisk(std::wstring aFileName);

private:

};