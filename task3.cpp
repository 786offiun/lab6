#include<iostream>
using namespace std;
float   totalincome(string stype,int row, int colum );
main()
{
   float result;
    int row;
    int colum;
    string stype;
    cout<<"enter the row"<<endl;
    cin>>row;
    cout<<"enter the colum"<<endl;
    cin>>colum;
    cout<<"enter the type"<<endl;
    cin>>stype;
    
   result = totalincome(stype,row, colum );
   cout<<result;
}
   float totalincome(string stype,int row, int colum )
   {
float first=12.00;
float second=7.50;
float third=5.00;
float income;
if(stype=="premiere")
{
income=row*colum*first;
}
else if(stype=="middle")
{
income=row*colum*second;
}
else
{
income=row*colum*third;
}
return income;


   }