#include <iostream>
using namespace std;

class Matrix
{
private:
	int row,col,**arr;
public:
	Matrix()
	{
		cout<<"	Matrix()"<<endl;
		row=0;
		col=0;
		arr=NULL;
	}
	Matrix(int r,int c)
	{
		cout<<"	Matrix(int r,int c)"<<endl;
		row=r;
		col=c;
		arr=new int*[row];
		for(int i=0;i<row;i++)
		{
			arr[i]=new int;
		}
	}
	~Matrix()
	{
		cout<<"	~Matrix()"<<endl;
		if(arr!=NULL)
		{
			for(int i=0;i<row;i++)
			{
				delete[] arr[i];
				arr[i]=NULL;
			}
			delete[] arr;
		}
	}
	Matrix& operator+(Matrix &other)
	{
		cout<<"	Matrix & operator+(Matrix &other)"<<endl;
		//Matrix temp;
			for(int i=0;i<other.row;i++)
				for(int j=0;j<other.col;j++)
				{
					this->arr[i][j]=this->arr[i][j] + other.arr[i][j];
				}
			return *this;
	}
	Matrix& operator-(Matrix &other)
	{
		cout<<"	Matrix & operator+(Matrix &other)"<<endl;
		//Matrix temp;
			for(int i=0;i<other.row;i++)
				for(int j=0;j<other.col;j++)
				{
					this->arr[i][j]=this->arr[i][j] - other.arr[i][j];
				}
			return *this;
	}
	Matrix& operator*(Matrix &other)
	{
		cout<<"		Matrix& operator*(Matrix &other)"<<endl;
		Matrix temp(row,col);
			for(int i=0;i<this->row;i++)
				for(int j=0;j<other.col;j++)
				{
					temp.arr[i][j]=0;
					for(int k=0;k<this->col;k++)
					{
					temp.arr[i][j]+= (this->arr[i][k] * other.arr[k][j]);
					}
				}
			cout<<"-------------------------------"<<endl<<temp;
			return temp;
	}
	Matrix & operator=(Matrix &other)
	{
		cout<<"*******************(Matrix &other)"<<endl;
			for(int i=0;i<other.row;i++)
				for(int j=0;j<other.col;j++)
				{
					this->arr[i][j]=other.arr[i][j];
				}
			return *this;
	}

	friend ostream& operator<<(ostream& cout,Matrix &other);
	friend istream& operator>>(istream& cout,Matrix &other);

};
ostream& operator<<(ostream& cout,Matrix &other)
{
	for(int i=0;i<other.row;i++)
	{
		for(int j=0;j<other.col;j++)
		{
			cout<<other.arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return cout;
}
istream& operator>>(istream& cout,Matrix &other)
{
	for(int i=0;i<other.row;i++)
	{
		for(int j=0;j<other.col;j++)
		{
			cin>>other.arr[i][j];
		}
	}
	return cout;
}
int main()
{
	Matrix m1(2,2);
	cin>>m1;
	cout<<m1;
	Matrix m2(2,2);
	cin>>m2;
	cout<<m2;
	Matrix m3(2,2);
	cin>>m3;
	cout<<m3;
	cout<<"	................................ "<<endl;
	cout<<m1+m2+m3;
	cout<<m1-m2-m3;
	//cout<<m1*m2*m3;

	//cout<<m3;
	return 0;
}

