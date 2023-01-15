#include<iostream>
using namespace std;
string check(float speed);
main()
{   string result;
    float speed;
    cout<<"endter the speed :"<<endl;
    cin>>speed;
    result=check(speed);
  cout<<result;
}
string check(float speed)
{
    string result;
    if(speed<=10)
    {
    result="slow";
 }
 else if(speed>=10||speed<=50)
{
   result="average";

}

 else if(speed>=51||speed<=150)
{
   result="fast";

}


 else if(speed>=151||speed<=1000)
{
   result="ulreafast";

}


 else if(speed<1000)
{
   result="ectremlyfast";

}

return result;


}
