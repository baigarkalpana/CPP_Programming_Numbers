/*
   Author:Kalpana Baigar
    program to check wether number is armstrong or not
 */

#include<iostream>    //header file which provide input and output streams
#include <cmath>
using namespace std;

class number
{
         public	:
		 	     int temp,digit,rev;
	
         public:
	  	       void armstrng(int inum)    //function defination
				 {
				 	temp=inum;
				 	int sum=0;
				 	while(inum!=0)
				 	{
					 
				 	    digit=0,rev=0;
				 		digit=inum%10;
						rev = pow(digit, 3);
						sum=sum+rev;
						inum=inum/10;
	                }
	                 if(temp==sum)
	                 {
	                 	cout<<"\narmstrong number";
					 }
                     else
                     {
                     	cout<<"\nnot a armstrong number";
					 }
					
				 } 	
};

int main()                                         //entry point function
{
	
	int num1=0;   //Initialization
	
	cout<<"enter number:";
	cin>>num1;
	cout<<"\nyour entered number is:"<<num1;
	number obj;
    obj.armstrng(num1);                     //call by value
	
    
     
	
return 0;	
}
