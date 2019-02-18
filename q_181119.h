#include<iostream>
#include<string>
using namespace std;

class bankaccount
{
	string name;
	int id;
	float balance;
	float balancelimit;
	int*trans;
	int maxtrans;
	int nooftrans;
public:
	bankaccount(string name, int id);//constructor
	void print();	//prints the class
	void withdraw(int cash);//withdraws cash
	void deposit(int cash);//deposits cash
	~bankaccount();//destructor
	void increasecapacity();
	
};
