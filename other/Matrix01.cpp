#include <iostream>
using namespace std;

class Matrix
{
private:
	int row;
	int col;
	int **ptr;

public:
	Matrix(int row,int col)
	{
		this->row=row;
		this->col=col;
		this->ptr=new int*[this->row];
		for(int i=0;i<this->row;i++)
			this->ptr[i]=new int[this->col]();
	}
	Matrix(Matrix &other)
	{
		this->row=other.row;
		this->col=other.col;
		this->ptr=new int*[this->row];
		for(int i=0;i<this->row;i++)
			this->ptr[i]=new int[this->col];
	}



	Matrix & operator+(Matrix &other)
	{
		for(int i=0;i<this->row;i++)
		{
			for(int j=0;j<this->col;j++)
				this->ptr[i][j] = this->ptr[i][j] + other.ptr[i][j];
		}
		return *this;
	}

	Matrix & operator-(Matrix &other)
	{
		for(int i=0;i<this->row;i++)
		{
			for(int j=0;j<this->col;j++)
				this->ptr[i][j] = this->ptr[i][j] - other.ptr[i][j];
		}
		return *this;
	}
	Matrix & operator=(Matrix &other)
	{
		for(int i=0;i<this->row;i++)
		{
			for(int j=0;j<this->col;j++)
				this->ptr[i][j] =  other.ptr[i][j];
		}
		return *this;
	}
	Matrix  operator*(Matrix &other)
	{
		Matrix temp(this->row,other.col);
		for(int i=0;i<this->row;i++)
		{
			for(int j=0;j<this->col;j++)
			{

				for(int k=0;k<this->col;k++)
				{
					temp.ptr[i][j] += (this->ptr[i][k] * other.ptr[k][j]);


				}
			}
		}
		return temp;
	}

	~Matrix(void)
	{
		//cout<<"in destructor";
		for(int i=0;i<this->row;++i)
		{
			delete[] this->ptr[i];
			this->ptr[i]=NULL;
		}

		delete[] this->ptr;
		this->ptr=NULL;
	}
	friend void operator>>(istream &cin, Matrix &other);
	friend void operator<<(ostream &cout, const Matrix &other);

};


void operator>>(istream &cin, Matrix &other)//ninsertion overload
{
	for(int i=0;i<other.row;i++)
	{

		for(int j=0;j<other.col;j++)
		{
			cout<<"Enter for the "<<i<<" row "<<j<<" col";
			cin>>other.ptr[i][j];
			cout<<endl;
		}
	}
	return;
}

void operator<<(ostream &cout, const Matrix &other)
{
	for(int i=0;i<other.row;i++)
	{
		for(int j=0;j<other.col;j++)
			cout<<other.ptr[i][j]<<"  ";
		cout<<endl;
	}

}
int Menuchoice()
{
	int choice;
	cout<<"0) EXIT"<<endl;
	cout<<"1) Addition "<<endl;
	cout<<"2) subtraction "<<endl;
	cout<<"3) Multiplication "<<endl;
	cin>>choice;
	return choice;
}

int main() {
	int row,col;
	cout<<"Enter 1st array"<<endl;
	cout<<"Enter the row  :";
	cin>>row;
	cout<<"Enter 2nd array"<<endl;
	cout<<"Enter the Col  :";
	cin>>col;


	Matrix p1(row,col);
	cin>>p1;

	Matrix p2(row,col);
	cin>>p2;

	cout<<p1;
	cout<<p2;
	int ch;
	while(ch !=0)
	{
		ch=Menuchoice();

		switch(ch)
		{
		case 1:
			cout<<p1+p2;
			break;
		case 2:
			cout<<p1-p2;
			break;
		case 3:
			cout<<p1*p2;
			break;
		case 0:
			continue;
			break;
		default:
			cout<<"Enter correct Choice "<<endl;
		}
	//cout<<"ADD "<<endl;
	//Matrix p3 = p1 + p2; // p1.operator+(p2)
	//cout<<p3;

	//p3 = p1 - p2;
	//cout<<"Subtract "<<endl;
	//cout<<p3;

	//	cout<<"Multiplication "<<endl;

		//cout<<p1 * p2;
	}//End of while
	//cout<<p3;

	return 0;
}
