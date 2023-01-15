#include<iostream>
using namespace std;
string checktitle(float age,char gendle);
main()
{    
     string result;
    char gendle;
    float age;
    cout<<"enter the age"<<endl;
    cin>>age;
    cout<<"enter the gendle:"<<endl;
    cin>>gendle;
    result=checktitle(age,gendle);
    cout<<result; 
}
string checktitle(float age,char gendle)

{
string title;
if(age>=16 && gendle=='m')
{
    title="mr";
}
else if(age<16 && gendle=='m')
{
title="master";

}
else if(age >=16 && gendle=='f')
{
title="ms";

}
else
{
title="miss";

}
return 0;
}