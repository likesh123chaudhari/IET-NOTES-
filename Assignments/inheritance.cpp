 #include<iostream>
using namespace std;

class emp
{
	int id;
	public:
		emp()
		{
			id = 1;	
		}
		emp(int i)
		{
			id = i;
		}	
		
		void display()
		{
			cout<<"id :"<<id<<endl;
		}
		
		int findsalary()
		{
			return 0;
		}
};

class wageemp : public emp
{
	int hrs,rate;
	public:
		wageemp()
		{
			hrs=rate=0;	
		}	
		wageemp(int h, int r, int i):emp(i)
		{
			hrs = h;
			rate = r;
		}
		
		void display()
		{
			cout<<"hrs :"<<hrs<<" "<<"rate :"<<rate<<endl;
		}
		
		int findsalary()
		{
			return hrs*rate;
		}
};

class salesperson : public wageemp
{
	int sales,comm;
	public:
		salesperson()
		{
			sales=comm=0;	
		}	
		salesperson(int h, int r, int i, int s, int c):wageemp(h,r,i)
		{
			sales = s;
			comm = c;
		}
		
		void display()
		{
			emp::display();
			wageemp::display();
			cout<<"sales :"<<sales<<" "<<"commition :"<<comm<<endl;
		}
		
		int findsalary()
		{
			return wageemp::findsalary() + sales*comm;
		}
};


int main()
{
	salesperson e1(2,1000,101,5,500);
	e1.display();
	cout<<"Salespersin salary is :"<<e1.findsalary();
}
