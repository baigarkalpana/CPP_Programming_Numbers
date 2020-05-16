/*
   Author:Kalpana Baigar
    program to print factorail 
 */


#include<iostream>    //header file which provide input and output streams

using namespace std;

int main()                                         //entry point function
{
	
	int num1=0,i=0,sum=1;   //Initialization
	
	cout<<"enter number:";
	cin>>num1;
	cout<<"\nyour entered number is:"<<num1;
	            
	for(i=num1;i>=1;i--)
	{
	   
	      sum=sum*i	;
	   	
	}          
	
    cout<<"\nfactorial is:"<<sum;
     
	
return 0;	
}
