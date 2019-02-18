#include<iostream>
#include"Header.h"
#include<string>
using namespace std;



bankaccount::bankaccount(string acc, int accid)
{
	name=acc;
	id=accid;
	balance=10000;
	balancelimit=200000;
	maxtrans=10;
	trans=nullptr;
	trans=new int[maxtrans];
	nooftrans=0;
}
void bankaccount::print()
{
	cout<<"name of the acoount is "<<name<<endl;
	cout<<"account id is "<<id<<endl;
	cout<<"current balance is "<<balance<<endl;
	cout<<"number of transactions made is "<<nooftrans<<endl;
	cout<<"transactions "<<trans<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<trans[i]<<endl;
	}
}
void bankaccount::withdraw(int cash)
{
	if (balance>=cash)
	{
		balance=balance-cash;
		cout<<"transaction successful";
		cout<<"balance left:"<<balance;
		trans[nooftrans]=-cash;
	    nooftrans=nooftrans+1;	
	}
	else if(balance<cash)

	{
		cout<<"transaction unsuccessful";
	}
	
}

void bankaccount::deposit(int cash)
{
	if(cash+balance<=balance)
	{
		balance=balance+cash;
		trans[nooftrans]=cash;
	}
}

bankaccount::~bankaccount()
{
	id=0;
	name=" ";
	balance=0;
	balancelimit=200000;
	maxtrans=10;
	delete[]trans;
	trans=nullptr;
	nooftrans=0;
}
   
void bankaccount::increasecapacity()
{
	if (nooftrans==maxtrans)
	{
		int *temp=new int[maxtrans*2];
		for(int i=0;i<maxtrans;i++)
		{
			temp[i]=trans[i];
		}
	delete[]trans;
	trans=nullptr;
	int*trans=new int[maxtrans*2];
	for(int i=0;i<maxtrans;i++)
	{
		trans[i]=temp[i];
	}
	maxtrans=maxtrans*2;
	}
}
