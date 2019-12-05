#include <iostream>
#include <string>
using namespace std;

class employee
{
private:
	int empid;
	string name;
	float salary;
public:
	employee()
	{
		this->empid = 0;
		this->name = "";
		this->salary = 0.00;
	}
	void set_empid(int empid)
	{this->empid=empid;}
	void set_name(string name)
	{this->name=empid;}
	void set_salary(float sal)
	{this->salary=sal;}

	int get_empid(void)
	{return this->empid;}
	string get_name(void)
	{return this->name;}
	float get_salary(void)
	{return this->salary;}
	friend ostream& operator<<(ostream &cout,const employee &e1);
	friend istream& operator>>(istream &cin, employee &e1);
};

class node
{
private:
	node *prev;
	employee data;
	node *next;
public:
	node(employee data)
	{
		this->prev = NULL;
		this->data = data;
		this->next = NULL;
	}
	friend class list;
};

class list
{
private:
	node *head;
	int cnt;
public:
	list(void)
	{
		this->head = NULL;
		this->cnt = 0;
	}
	bool list_is_empty()
	{
		return (this->head==NULL);
	}
	int get_cnt()
	{
		return this->cnt;
	}
	void add_node_at_last_position(employee e)
	{
		node *newnode = new node(e);
			if( list_is_empty())
			{
				head = newnode;
				this->cnt++;
			}
			else
			{
				node *trav = head;
				while( trav->next != NULL )
				{
					trav = trav->next;
				}
				newnode->prev = trav;
				trav->next = newnode;
				this->cnt++;
			}
		}
	void display_list(void)
	{
		if( !list_is_empty())
		{
			node *trav = head;
			cout << "list in a forward dir is : "<<endl;
			while( trav != NULL )
			{
				cout <<trav->data;
				trav = trav->next;
			}
			cout << endl;
		}
		else
			cout << "list is empty !!!" << endl;
	}
};

ostream& operator<<(ostream &cout,const employee &e1)
{
	cout<<"Employee ID    : "<<e1.empid<<endl;
	cout<<"Employee Name  : "<<e1.name<<endl;
	cout<<"Employee salary: "<<e1.salary<<endl;
	return cout;
}
istream& operator>>(istream &cin, employee &e1)
{
	cout<<"Enter employee ID :";
	cin>>e1.empid;
	cout<<"Enter employee name:";
	cin>>e1.name;
	cout<<"Enter employee salary:";
	cin>>e1.salary;
	return cin;
}

int main()
{
	employee e1, e2, e3;
	cin>>e1>>e2>>e3;
	list l1;
	l1.add_node_at_last_position(e1);
	l1.add_node_at_last_position(e2);
	l1.add_node_at_last_position(e3);
	l1.display_list();

	return 0;
}
