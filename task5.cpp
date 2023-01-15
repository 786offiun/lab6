#include<iostream>
using namespace std;
float heckit(int distance,string time);

main()
{
  float result; 
  int distance;
  string time;
  cout<<"enter the distance:"<<endl;
  cin>>distance;
  cout<<"enter the time:"<<endl;
  cin>>time;
  
  result=heckit(distance,time);
  cout<<result;





}

float heckit(int distance,string time)
   {
      float result;
        if(distance<20)
        {
           if(time=="night")
            {
                result=distance*0.90;
        
            }
            else
            {
                result=distance*0.79;
            }
        
        }
                if(distance>=20||distance<=99)
                {
                   result=distance*0.09;
            

                }     
                  if(distance>=100)
                  {
                    result=distance*0.06;
                  }

       return result;
     }
