#include "Class.h"



Class::Class(std::string name) : _name(name)
{
}


Class::~Class()
{
}

std::string Class::Attack()
{
	return _name + " attacks.";
}
