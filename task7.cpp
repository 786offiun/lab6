#include<iostream>
using namespace std;
float requiredmoney(float budget,string category,int numberm);
float leftmoney(float budget,int numberm);  
  
main()
{  
   float result2;
  float result1;
  float budget;
  string category;
  int numberm;
   cout<<"enter the budget:"<<endl;
   cin>>budget;
   cout<<"enter the category:"<<endl;
   cin>>category;
   cout<<"enter the numberm:"<<endl;
   cin>>numberm;
   result1=requiredmoney(budget,category,numberm);
   result2 = leftmoney(budget,numberm);  
   cout<<result2;
   if(result1>result2 )
{
   float rmoney=result1-result2;
  cout<<"no!required money is:"<<rmoney<<endl;

}
else
{
   float rmoney=result2-result1;
  cout<<"yea!you have left money is:"<<rmoney<<endl;


}
}
float requiredmoney(float budget,string category,int numberm)
{
 float required;
 if(category=="vip") 
{
   required=numberm*499.99;
}
else
{
   required=numberm*249.99;


}
return required;
}

float leftmoney(float budget,int numberm)
{
 float left;
 if(numberm>=1||numberm<=4)
{
 
 left=budget-(budget*(75.0/100));
}

else if(numberm>=5||numberm<=9)
{
 
 left=budget-(budget*(60.0/100));
}

else if(numberm>=10||numberm<=24)
{
 
 left=budget-(budget*(50.0/100));
}

else if(numberm>=25||numberm<=49)
{
 
 left=budget-(budget*(0.4));
}

else if(numberm>49) 
{
 
 left=budget-(budget*(25.0/100));
}
return left;
}  
