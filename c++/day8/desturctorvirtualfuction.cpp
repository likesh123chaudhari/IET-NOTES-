#include<iostream>
using namespace std;
class A{
	public :
	virtual ~A()
	{
		cout<<" A destuructor is called";
	}
	};
	class B:public A

	{
			public:
	       	~B()
		{
				cout <<" B destureuctor is called";
		}
		
	
	};
	int main()
{
	
	A * aptr= new B;
	delete aptr;
	
}
