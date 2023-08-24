#include<iostream.h>
#include<conio.h>
void main()
{
	int no1,no2,no3;
	clrscr();

	cout<<"220130318007";
	cout<<"sani zalavadiya";

	cout<<"Enter the 1 number::";
	cin>>no1;

	cout<<"Enter the 2 number::";
	cin>>no2;

	cout<<"Enter the 3 number::";
	cin>>no3;

	if(no1>no3)
	{
		cout<<"no1 is largest"<<endl;
	}
	else
	{
		if(no2>no3)
		{
			cout<<"no2 is largest"<<endl;
		}
		if(no3>no1)
		{
			cout<<"no3 is largest"<<endl;
		}
	}
	getch();
}
