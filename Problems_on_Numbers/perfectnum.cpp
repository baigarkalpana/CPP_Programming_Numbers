/*
   Author:Kalpana Baigar
    program to check wether number is perfect or not
 */

#include<iostream>    //header file which provide input and output streams

using namespace std;


int perfectnum(int inum)            //function defination
{
	int i=0,sum=0;
	
	for(i=1;i<inum;i++)
	{
		if(inum%i==0)
		{
			sum=sum+i;
			
		}
	}
	
	return sum;                 //returning value 
	
}
	

int main()                                         //entry point function
{
	
	int num1=0,ret=0;   //Initialization
	
	cout<<"enter number:";
	cin>>num1;
	cout<<"\nyour entered number is:"<<num1;
	ret=perfectnum(num1);                   //call by value
	
     if(ret==num1)        //if reverted number and main number is same,den it is palindrome number
	 {
	    cout<<"\nperfect number";	
	 }     
	 else
	 {
	 	cout<<"\nnot a perfect number";
	 }
     
	
return 0;	
}
