#include<iostream.h>
#include<conio.h>

int fibo(int );

int main()
{
	int no1,i;
	clrscr();

	cout<<"220130318007"<<endl;
	cout<<"sani zalavadiya"<<endl;

	cout<<"Enter the number::";
	cin>>no1;

	for(i=0;i<no1;i++)
	{	
		cout<<fibo(i)<<endl;
	}
	getch();

}
int fibo(int no1)
{
	if(no1<=1)
	return no1<<endl;
	return fibo(no1-1)+fibo(no1-2)<<endl;
}
