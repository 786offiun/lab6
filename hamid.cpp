#include<iostream>
using namespace std;
   int isgreater(int number1,int number2,int number3);
main()
{
    int number1,number2,number3,result;
     cout<<"enter the first no"<<endl;
     cin>>number1;
     cout<<"enter the second no"<<endl;
     cin>>number2;
     cout<<"enter the third no"<<endl;
     cin>>number3;
     result=isgreater(number1,number2,number3);
     cout<<result;
}
  int isgreater(int number1,int number2,int number3)
{
     if(number1>number2 &&number1>number3)
{
 return number1;
}

     if(number2>number1 &&number2>number3)
{
 return number2;
}

     if(number3>number2 &&number3>number1)
{
 return number3;
}

return 0;

}