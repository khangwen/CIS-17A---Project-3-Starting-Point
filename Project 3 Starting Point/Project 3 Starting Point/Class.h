#pragma once
#include <string> 

class Class
{
private:
	std::string _name;
public:
	Class(std::string name);
	~Class();

	std::string getName() { return _name; }
	virtual std::string Attack();
};

