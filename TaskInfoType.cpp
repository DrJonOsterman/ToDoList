#include "TaskInfoType.h"

TaskInfoType::TaskInfoType(void):done(false){}
TaskInfoType::TaskInfoType(std::string due, std::string desc, int pri):
dueDate(due), description(desc), priority(pri), done(false){}
TaskInfoType::~TaskInfoType(void){}
