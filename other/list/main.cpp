/*
 * main.cpp
 *
 *  Created on: 29-Sep-2019
 *      Author: Rohit
 */

#include <iostream>
using namespace std;
#include<cstring>
#include"list.h"
#include"node.h"
#include"employee.h"
int data, position;

enum options { EXIT, ADDLAST, DISP};

int menu_driven()
{
	int choice;

	cout << "=========0.exit===========" << endl;
	cout << "1.========Add_last========" << endl;
	cout << "2.====display element=====" << endl;

	cin >> choice;
	return choice;
}
int main() {
	int size;
	cout << "Enter the size of the employees" << endl;
	cin >> size;

	node n;

	int choice;
	employee emp[size];
	list emplist;

	do {
		choice = menu_driven();
		switch (choice) {
		case ADDLAST:

			cout<<"Enter Employee Details : ";
			for(int i=0;i<size;i++)
			{
			emp[i].accept_record();

			n.setEmp(emp[i]);

			emplist.add_node_at_last_position(&n);
			}
			break;


		case DISP:
			for(int i=0;i<size;i++)
			{
			emplist.display_list();
			}
			break;


		} //end of the switch control
	} while (choice != 0);

	return 0;
}
