/*
   Author:Kalpana Baigar
   Program to printing Fibonacci series
*/


#include<iostream>
using namespace std;

void fibonacci(int range)          //function defination
{
	int first=0,second=1,i,sum=0;
	cout<<first<<" "<<second;
	for(i=2;i<range;i++)
	{
	
	  sum=first+second;
	  cout<<" "<<sum;
	  first=second;
	  second=sum;
	  
    }
}


int main(void)                // entry point function
{
	int num=0;
	cout<<"enter number";  //accepting range from user
	cin>>num;
	fibonacci(num);
}




