#pragma once
#include "ToDoListType.h"
#include "TaskInfoType.h"


class ToDoItemType : public ToDoListType
{
public:
 	ToDoItemType(void);
	ToDoItemType(std::string, TaskInfoType);
	~ToDoItemType(void);
	std::string taskName;
	ToDoItemType* nextTask;
	TaskInfoType properties;

friend std::ostream& operator<< (std::ostream &out, ToDoItemType &);



};
