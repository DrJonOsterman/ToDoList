#pragma once
#include <string>
class TaskInfoType
{
public:
	TaskInfoType(void);
	TaskInfoType(std::string, std::string, int);
	~TaskInfoType(void);
	std::string dueDate;
	std::string description;
	int priority;
	bool done;
};
