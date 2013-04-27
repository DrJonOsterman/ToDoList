#include "ToDoItemType.h"

ToDoItemType::ToDoItemType(void):nextTask(0){}

ToDoItemType::ToDoItemType(std::string nameParam, TaskInfoType taskObjParam):
taskName(nameParam), properties(taskObjParam),nextTask(0){}

ToDoItemType::~ToDoItemType(void){}


std::ostream& operator<< (std::ostream &out, ToDoItemType & ToDoItemObj)
{	out << "-----------------"									<< "\n" <<
	"Task Name: "		  << ToDoItemObj.taskName				<< "\n" <<
	"Due Date: "		  << ToDoItemObj.properties.dueDate		<< "\n" <<
	"Priority: "		  << ToDoItemObj.properties.priority	<< "\n" <<
	"Description: "		  << ToDoItemObj.properties.description << "\n" <<
	"Completed?: "		  << ToDoItemObj.properties.done		<< "\n" <<
	"Next Item pointer: " << ToDoItemObj.nextTask				<< "\n";
    return out;
}