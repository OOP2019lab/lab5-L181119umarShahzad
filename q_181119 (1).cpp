#include<iostream>
#include<string>
#include"Header.h"
using namespace std;

int main()
{
	bankaccount myaccount("John D", 12345);
	myaccount.print();
	myaccount.withdraw(2000);
	myaccount.print();
	myaccount.deposit(200000);
	myaccount.print();
	myaccount.deposit(250000);
	myaccount.print();
	myaccount.withdraw(200);
	myaccount.print();
	myaccount.withdraw(200);
	myaccount.print();
	myaccount.withdraw(200);
	myaccount.print();
	myaccount.withdraw(200);
	myaccount.print();
	myaccount.withdraw(200);
	myaccount.print();
	myaccount.withdraw(200);
	myaccount.print();
	myaccount.withdraw(200);
	myaccount.print();
	myaccount.withdraw(200);
	myaccount.print();
	myaccount.withdraw(200);
	myaccount.print();
    system("pause");

}