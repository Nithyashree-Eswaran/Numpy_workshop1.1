#include<iostream>
using namespace std;
int main()
{
	int row,col,a[20][20];
	cout<<"Enter row size:";
	cin>>row;
	cout<<"Enter col size:";
	cin>>col;
	int i,j;
	cout<<"Enter array elements:";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Elemnts are....."<<"\n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
