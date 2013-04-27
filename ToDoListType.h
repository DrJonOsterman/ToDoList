#pragma once
#include <string>

class ToDoListType
{
public:
	std::string strListName;
	ToDoListType(std::string nameParam);
	ToDoListType(void);
	~ToDoListType(void);
};
