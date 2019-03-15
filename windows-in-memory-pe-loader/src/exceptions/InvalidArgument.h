#pragma once 

#include <exception>

struct InvalidArgument : public std::exception {
	const char * what() const throw () {
		return "Invalid argument";
	}
};