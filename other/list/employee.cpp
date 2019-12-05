/*
 * employee.cpp
 *
 *  Created on: 30-Sep-2019
 *      Author: Rohit
 */
#include <iostream>
using namespace std;
#include"employee.h"

employee::employee(void)
{

  this->empid=0;
  this->name="";
  this->salary=0.0;
}

void employee::accept_record(void)
{
	cout<<"Enter the employee Id"<<endl;
	cin>>this->empid;
	cout<<"Enter the employee name"<<endl;
	cin>>this->name;
	cout<<"Enter the employee salary"<<endl;
	cin>>this->salary;
}
void employee::display_record(void)
{
	cout<<"employee Id :: "<<endl;
	cout<<this->empid<<endl;
	cout<<"employee name is ::"<<endl;
	cout<<this->name<<endl;
	cout<<"employee salary is ::  "<<endl;
	cout<<this->salary<<endl;
}
