#include<iostream.h>
#include<conio.h>

int ar(int );

int main()
{
	int no1;
	clrscr();
	cout<<"220130318007"<<endl;
	cout<<"sani zalavadiya"<<endl;

	cout<<"Enter the number::";
	cin>>no1;

	ar(no1);
	getch();
}
int ar(int no1)
{
		int sum=0,r;

		//i=no1;

		while(no1!=0)
		{
			r=no1%10;
			sum=sum+(r*r*r);
			no1=no1/10;
		}
		if(no1==sum)
		{
			cout<<no1<<"This is armstrong number";
		}
		else
		{
			cout<<no1<<"This is not armstrong number";
		}
}
