#include<iostream>
#include<cstring>
using namespace std;

class Emp
{
	int empno;
	string name;
	float sal;
public:
	Emp()
	{
		empno=0;
		this->name=" ";
		sal=0;
	}

	void setNo(int no)
	{
		empno=no;
	}
	void setName(string name)
	{
		this->name=name;
	}
	void setSal()
	{
		try
		{
			cout<<"Enter new sal"<<endl;
			cin>>this->sal;
			if(this->sal<=0)
				throw 1;

		}
		catch(int a)
		{
			cout<<"Invalid salary"<<endl;
		}
	}

	int getNo()
	{
		return empno;
	}
	string getName(string name[50])
	{
		return this->name;
	}
	float getSal()
	{
		return this->sal;
	}
	friend ostream& operator<<(ostream &cout,Emp const &other);
	friend istream& operator>>(istream &cin,Emp &other);


};
ostream& operator<<(ostream &cout,Emp const &other)
{
	cout<<"Emp Num is :"<<other.empno<<endl;
	cout<<"Emp Name is :"<<other.name<<endl;
	cout<<"Emp sal is :"<<other.sal<<endl;
	return cout;
}
istream& operator>>(istream &cin,Emp &other)
{
		cout<<"Enter no"<<endl;
		cin>>other.empno;
		cout<<"Name"<<endl;
		cin>>other.name;
		cout<<"salary"<<endl;
		cin>>other.sal;
		return cin;
}
int main()
{
	Emp e1;
	int ch;
	cout<<"0.Exit"<<endl;
	cout<<"1.Accept"<<endl;
	cout<<"2.Display"<<endl;
	cout<<"3.Set Salary"<<endl;
	cout<<"4.get salary"<<endl;

	while(1)
	{
		cout<<"Enter choice :"<<endl;
		cin>>ch;
		switch(ch)
		{
		case 0:
			return 0;
		case 1:
			cin>>e1;
			break;
		case 2:
			cout<<e1;
			break;
		case 3:
			e1.setSal();
			break;
		case 4:
			float s=e1.getSal();
			cout<<s<<endl;
		}

	}

	return 0;
}

