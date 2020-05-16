/*
   Author:Kalpana Baigar
    program to reverse number
 */

#include<iostream>    //header file which provide input and output streams

using namespace std;

class revnumber
{
         public	:
		 	     int temp,digit,rev;
	
         public:
	  	       int reverse(int inum)    //function defination
				 {
				 	 digit=0,rev=0;
				 		while(inum!=0)
						{
							digit=inum%10;
							rev=rev*10+digit;
							inum=inum/10;
						}
						
	
	                return rev;  
					
				 } 	
};

int main()                                         //entry point function
{
	
	int num1=0,ret=0;   //Initialization
	
	cout<<"enter number:";
	cin>>num1;
	cout<<"\nyour entered number is:\n"<<num1;
	revnumber obj;
	ret= obj.reverse(num1);                     //call by value
	
	cout<<"\nafter reversing number is:\n"<<ret;    //printing values after reversing

	
return 0;	
}
