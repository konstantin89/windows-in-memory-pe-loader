#pragma once 

#include <exception>

struct FailedToAllocMemory : public std::exception {
	const char * what() const throw () {
		return "Failed to allocate memoty";
	}
};

 