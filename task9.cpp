#include<iostream>
using namespace std;
int checkit(string year,int holiday,int dayhome);

main()
{ 
   int result;
   string year;
   int holiday;
   int dayhome;
   cout<<"enter the year: "<<endl;
   cin>>year;
   cout<<"enter the holidays: "<<endl;
   cin>>holiday;
   cout<<"enter the day in which he is treveling to home: "<<endl;
   cin>>dayhome;
   result=checkit(year,holiday,dayhome);
   cout<<result;
}
 int checkit(string year,int holiday,int dayhome)
{
  int result;
  float totalweek=48;
  float ph;
  float ps;
  int weeks;
  float totalplay;  
  ph=holiday*(2.0/3);
  weeks=totalweek-dayhome;
  ps=weeks*(3.0/4);
  totalplay=ps+ph+dayhome;
  if(year=="normal")
{
 return totalplay;
}
  if(year=="leap")
 
{
 totalplay=totalplay +((15.0/100)*totalplay);
 return totalplay;
}
return 0;
}
