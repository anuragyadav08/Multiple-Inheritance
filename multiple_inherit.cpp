/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class A
{
public:
    void fun()
    {
        cout<<"Hi , I am Class 'A'"<<endl;
    }
};
class B 
{
public:
    void fun()
    {
       cout<<"Hi , I am Class 'B'"<<endl; 
    }
};
class C:public A,public B 
{
public:    
   void fun()
   {
       A::fun();
       B::fun();
       cout<<"Hi , I am Inherited Class 'C' of Class 'A' and 'B'";
   }
};
int main()
{
    C obj;
    obj.fun();
    return 0;
}
