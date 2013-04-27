#include "ToDoItemType.h"
#include "TaskInfoType.h"
#include <iostream>

ToDoItemType *first, *last,*newNode,*current;

void addNewNode(std::string nameParam, std::string dueDateParam, std::string descParam, int priorityParam)
{
	TaskInfoType tempInfo(dueDateParam, descParam, priorityParam);
	newNode = new ToDoItemType(nameParam, tempInfo);
	newNode->nextTask = NULL;
		
	if (first == NULL)
	{
		first = newNode;
		last = newNode;
	}
	else 
	{
		last->nextTask = newNode;
		last = newNode;
	}
}

void traverseNodes(){
	current = first;
	while (current != NULL)
		{
			std::cout << "You are at task title: " << current->taskName<< + " Due on: " + (*current).properties.dueDate + "\n";
			current = current->nextTask;
		}
}

void deleteNode(int indexToDelete){
	int iterator = 0;
	current = first;

	while (current != NULL)
		{
			std::cout << "You are at task title: " << current->taskName<< + " Due on: " + (*current).properties.dueDate + "\n";
			
			if (iterator == indexToDelete-1)
			{	
				//current->nextTask = current->NextTask->NextTask;
				//change link code
				// delete task
			}

			if (iterator == indexToDelete)
			{
				current->nexTask = NULL;
				delete current;		
			}

			current = current->nextTask;
			iterator++;
	}
}

int main()
{
	first = NULL;
	last = NULL;
	addNewNode("Complete Project", "5/23/2012", "CIS4100", 5);
	addNewNode("Finish book", "7/30/2012", "Halfway in book two", 2);
	std::cout<<"----Traversing List----"<<std::endl;
	traverseNodes();
	std::cout<<"----You just traversed the List----"<<std::endl;
	std::cin.ignore();
	return 0;
}