#include<stdio.h>
#include<stdlib.h>
int i=0;
struct customers
{
	char name[50];
	int ph_number;
	char Mname[50];
	int t1,t2;
	int date,month,year;
}c[10];

int issue_ticket()
{
	if(i<10)
	{
	printf("Enter name:");
	scanf("%s",c[i].name);
	printf("Enter phone number:");
	scanf("%d",&c[i].ph_number);
	printf("Enter Movie name:");
	scanf("%s",c[i].Mname);
	printf("Enter time in 24-hrs format(hr min):");
	scanf("%d %d",&c[i].t1,&c[i].t2);
	printf("Enter date in format(date month year):");
	scanf("%d %d %d",&c[i].date,&c[i].month,&c[i].year);
	if(c[i].t1<24 && c[i].t2<59 && c[i].date<31 && c[i].month<13 && c[i].month>0 && c[i].year>2019)
	{
		i++;
		printf("Ticket Confirmed\n");
	}
	else
	{
		printf("cannot confirm\n");
	}
	}
	else
	{
		printf("Tickets Closed\n");
	}	

}

int tickets_available()
{
	printf("tickets available=%d\n",10-i);
}

int main()
{
	int n;
	while(1)
	{
	printf("1.Enter 1 to Book ticket\n2.No of tickets available\n3.exit\n");
	scanf("%d",&n);
	switch(n)
	{
	case 1:issue_ticket();
			break;
	case 2:tickets_available();
			break;
	case 3:exit(0);
	}	
	}
}
