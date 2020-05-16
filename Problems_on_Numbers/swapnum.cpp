/*
   Author:Kalpana Baigar
    program to swap two numbers
 */

#include<iostream>    //header file which provide input and output streams

using namespace std;

class swapnumber
{
         public	:
		 	     int temp;
	
         public:
	  	       void swapnum(int* ptr1,int* ptr2)    //function defination
				 {
				 	
						temp= *ptr1;
						*ptr1=*ptr2;
						*ptr2=temp;
				 } 	
};

int main()                                         //entry point function
{
	
	int num1=0,num2=0;   //Initialization
	
	cout<<"enter two numbers:\n";
	cin>>num1>>num2;
	cout<<"\nyour entered number is:"<<num1<<" and "<<num2;
	 swapnumber obj;
	 obj.swapnum(&num1,&num2);                     //call by address
	
	cout<<"\nafter swapping number is:\n";
	cout<<"num1="<<num1<<" "<< "num2="<<num2;       //printing values after swapping
	
return 0;	
}
