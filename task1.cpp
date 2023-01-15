#include<iostream>
using namespace std;
char checkgrade(int marks);
main()
{
    int marks;
    cout<<"enter the marks";
    cin>>marks;
    char result=checkgrade(marks);
     cout<<result;
}
char checkgrade(int marks)
{
    char give;
if(marks<50)
{
    give='f';
}
else if(marks>=51 && marks<=60)
{
give='e';
}
else if(marks>=61&&marks<=70)
{
    give='d';
}
else if(marks>=71 && marks<=80)
{

    give='c';
}
else if(marks>=81 && marks<=85)
{
give='b';
}
else 
{
give='a';
}
return give;
}