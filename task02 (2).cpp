#include<iostream>
using namespace std;
string  checkit(int number1,int number2,int number3);

main()
{
 int number1;
 int number2;
 int number3;
 string result;
 cout<<"enter the first number:"<<endl;
 cin>>number1;
 cout<<"enter the second number:"<<endl;
 cin>>number2;
 cout<<"enter the third number:"<<endl;
 cin>>number3;
 result=checkit(number1,number2,number3);
 cout<<result;


}
string checkit(int number1,int number2,int number3)
 
{
    string result;
if(number1==number2 && number2==number3 )
{
 result="yes";
}
else
{

result="no";

}

return result;
}
