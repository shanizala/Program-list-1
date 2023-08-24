#include<iostream.h>
<incllude<conio.h>

int power(int,int );

int main()
{
	int base,po;
	clrscr();
	cout<<"220130318007"<<endl;
	cout<<"sani zalavadiya"<<endl;

	cout<<"Enter the base::";
	cin>>base;

	cout<<"Enter the power::";
	cin>>po;

	power(base,po);

	getch();
}
int power(int base,int pow)
{
		int i,re=1;
		for(i=0;i<=pow;i++)
		{
			re*=base;
		}
		cout<<re;
}
