#include<iostream>
using namespace std;
float checkit(string month,string day, int purchase);

main()
{
float purchase;
float result;
string month;
string day;
cout<<"endter the purchaes:"<<endl;
cin>>purchase;
cout<<"endter the day"<<endl;
cin>>day;
cout<<"endter the month"<<endl;
cin>>month;


result=checkit(month, day,purchase);
cout<<result;
}
float checkit(string month, string day, int purchase)
{
 float dis;
 if(day=="sunday")
 {
if(month=="octobar"||month=="august"||month=="march")
{
dis=purchase-(0.1*purchase);
}
}

else if(day=="monday")
 {
if(month=="november")
{
dis=purchase-(0.05*purchase);
}
}
else
{
    return purchase;
}

return dis;
}