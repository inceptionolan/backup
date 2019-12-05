/*
 * employee.h
 *
 *  Created on: 30-Sep-2019
 *      Author: Rohit
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include<cstring>
class employee
{
private:
	int empid;
	string name;
	float salary;

public:
	employee(void);
	void accept_record(void);
	void display_record(void);
};



#endif /* EMPLOYEE_H_ */
