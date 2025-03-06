#include<iostream>
using namespace std;
#include<string.h>

class saving_Acc
{
	int acc_No;
	char* ptr;
	public:
		saving_Acc(int acc_No, char* s)
		{
			this->acc_No = acc_No;
			int len = strlen(s);
			ptr = new char[len+1];
			strcpy(ptr,s);
		}
		
		void display()
		{
			cout<<"Account Number is :"<<acc_No<<endl;
			cout<<"Account Holder Name is :"<<ptr<<endl;
		}
};
class current_Acc
{
	int acc_No;
	char* ptr;
	public:
		current_Acc(int acc_No, char* s)
		{
			this->acc_No = acc_No;
			int len = strlen(s);
			ptr = new char[len+1];
			strcpy(ptr,s);
		}
		
		void display()
		{
			cout<<"Account Number is :"<<acc_No<<endl;
			cout<<"Account Holder Name is :"<<ptr<<endl;
		}
};
class Account:public current_Acc, public saving_Acc
{
	public:
		Account(int a, char* s, int a1, char* s1):current_Acc(a,s),saving_Acc(a1,s1){
			cout<<"Account class"<<endl;
		}
		void display(){
			cout<<"Current Account Details"<<endl;
			current_Acc::display();
			cout<<"Saving Account Details"<<endl;
			saving_Acc::display();
		}
};

int main()
{
	Account a3(10001,"ramesh",100002,"suresh");
//	a3.display();
//	a3.display();
	a3.current_Acc::display();
	a3.saving_Acc::display();
}

