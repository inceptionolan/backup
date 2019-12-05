#include <iostream>
using namespace std;
#include<cstring>
#include<cstdlib>


int data, pos;
class employee
{
private:
	int empid;
	string name;
	float salary;

public:

	employee(void)
	{

	  this->empid=0;
	  this->name="";
	  this->salary=0.0;
	}

	void accept(void)
	{
		cout<<endl<<"Enter the employee Id  ";
		cin>>this->empid;
		cout<<endl<<"Enter the employee name  ";
		cin>>this->name;
		cout<<endl<<"Enter the employee salary  ";
		cin>>this->salary;
	}
	void display_record(void)
	{
		cout<<"employee Id : ";
		cout<<this->empid<<endl;
		cout<<"employee name is :  ";
		cout<<this->name<<endl;
		cout<<"employee salary is :  ";
		cout<<this->salary<<endl;
	}

};

class node
{
private:
	employee data;
	node *prev;
	node *next;

public:
	node()
	{
		//this->data=NULL;
		this->next=NULL;
		this->prev=NULL;
	}
	void setEmp(employee e)
	{
		this->data=e;
	}
	friend class list;
	friend class employee;
};

class list
{
private:
	node *head;
	int cnt;
public:


	list (void) {
		this->head = NULL;
		this->cnt = 0;
	}

	bool  is_list_empty(void) {
		return (this->head == NULL);
	}

	void  addLast(node *n)
	{
		node *newnode = new node;

		if (is_list_empty())
		{
			this->head=n;
		} else
		{
			node *trav=head;
			while(trav->next!=NULL)
				trav=trav->next;
			trav->next=newnode;
			newnode->next=NULL;
		}
	}
	void  display(void)
	{
	 this->head->data.display_record();
	}
	~list(void)
	{
		if (!is_list_empty())
		{
			node *trav = this->head;
			delete trav->next;
			trav = trav->next;
		} else
			head = NULL;
	}

	friend class node;
	friend class employee;
};

int main() {

	int size, ch;
	cout << "Enter no of the employees" << endl;
	cin >> size;
	node n;
	employee emp[size];
	list emplist;

	while(1)
			{
		cout << "0.Exit" << endl;
		cout << "1.Add last" << endl;
		cout << "2.Display " << endl;
		cin >> ch;
		switch (ch)
		{
		case 0:
			exit(0);
		case 1:
			cout<<"Enter Employee Details : ";
			for(int i=0;i<size;i++)
			{
			emp[i].accept();
			n.setEmp(emp[i]);
			emplist.addLast(&n);
			}
			break;
		case 2:
			for(int i=0;i<size;i++)
			{
			emplist.display();
			}
			break;
		}
	}
	return 0;
}
