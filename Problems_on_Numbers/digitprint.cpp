/*
  Author: Kalpana Baigar
  program to break integer into digits
 */


#include <iostream>       //header file which provides input and output streams
using namespace std;

class number
{
  public:
  	     int cnt;
  	     
        void printdigit(int inum)
        {
        	int digit=0;           //variable initialization
			cnt=1;    
			while(inum!=0)        //while loop condition
			{
				digit=inum%10;
				cout<<"digit at place"<<cnt<<"is:"<<digit<<endl;  //printing digits
		        cnt++;            //incremented by 1
		        inum=inum/10;
			}
		}
           
};

int main()
{
  int num=0;
  cout<<"enter numer:";        //accepting number from user
  cin>>num;	
  number obj;                 //creating object of a class
  obj.printdigit(num);        //calling function which is defined in class

}






