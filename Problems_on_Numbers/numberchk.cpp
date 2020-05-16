/*
 Author-Kalpana Baigar
 Program to check accepted number is positive or negative
*/

#include <iostream>
using namespace std;

class number
{
  private:
         int num;

  public:
   void display(int num)
   {
        if (num>0)
        {
          cout<<"\n number is positive";
        }

        else if(num==0)
               {
        	    cout<<"\n number is zero";

               }
        else
        {
           cout<<"\n number is negative";
        }
   }
};

int main()
{
  number obj;
  obj.display(0);

}




