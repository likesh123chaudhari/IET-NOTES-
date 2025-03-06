#include <iostream> 
using namespace std; 
  
int main() 
{ 
   int a[3][3];    
	int b[2][3];     
	int c[3][3];	
  
    cout<<"Enter the first matrix elements :"<<endl;
    for(int i=0; i<3;i++)
    {
    	for(int j=0;j<3;j++)
    	{
    		cin>>*(*(a+i)+j);
		}
	}
	for(int i=0; i<3;i++)
    {
    	for(int j=0;j<3;j++)
    	{
    		cout<<*(*(a+i)+j)<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"Enter the second matrix elements :"<<endl;
    for(int i=0; i<2;i++)
    {
    	for(int j=0;j<3;j++)
    	{
    		cin>>*(*(b+i)+j);
		}
	}
	for(int i=0; i<3;i++)
    {
    	for(int j=0;j<3;j++)
    	{
    		cout<<*(*(b+i)+j)<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"Addition of the matrix is :"<<endl;
	
	for(int i=0; i<3;i++)
    {
    	for(int j=0;j<3;j++)
    	{
    		c[i][j]= a[i][j] + b[i][j];
		}
		cout<<endl;
	}
	
	for(int i=0; i<3;i++)
    {
    	for(int j=0;j<3;j++)
    	{
    		cout<<*(*(c+i)+j)<<"\t";
		}
		cout<<endl;
	}
	
	
	
}
