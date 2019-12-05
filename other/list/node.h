/*
 * node.h
 *
 *  Created on: 29-Sep-2019
 *      Author: Rohit
 */

#ifndef NODE_H_
#define NODE_H_
#include"employee.h"
class list;
class node
{
private:
	employee data;
	node *prev;
	node *next;

public:
	node();
	void setEmp(employee e);
	friend class list;
	friend class employee;


};

#endif /* NODE_H_ */
