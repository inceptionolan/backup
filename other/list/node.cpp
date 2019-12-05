/*
 * node.cpp
 *
 *  Created on: 29-Sep-2019
 *      Author: Rohit
 */


#include <iostream>
using namespace std;
#include"node.h";
#include"employee.h";

#include<cstdlib>;

node::node()
{
	//this->data=NULL;
	this->next=NULL;
	this->prev=NULL;
}
void node ::setEmp(employee e)
{

	this->data=e;

}


