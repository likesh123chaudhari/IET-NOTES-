#include<iostream>
using namespace std;
#include<string.h>

class Bike
{
	int speed;
	
	public:
		Bike(int s)
		{
			speed = s;
		}
		
		void Moving()
		{
			cout<<"Speed of Bike is :"<<speed<<endl;
		}
};
class Car
{
	int speed;
	
	public:
		Car(int s)
		{
			speed = s;
		}
		
		void Moving()
		{
			cout<<"Speed of car is :"<<speed<<endl;
		}
};
class Vehical:public Bike, public Car
{
	public:
		Vehical(int s, int t):Bike(s),Car(t)
		{
		}
		
		void Moving()
		{
			Bike::Moving();
			Car::Moving();
		}
	
};

int main()
{
	Vehical v(80,120);
	v.Moving();

}

