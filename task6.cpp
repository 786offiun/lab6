#include<iostream>
using namespace std;  
float checkit(string country,string item,int quntatiy);
main()
{
    float result;
    string country;
    int quntatiy;
    string item;

    cout<<"enter the country:"<<endl;
    cin>>country;
    cout<<"enter the item:"<<endl;
    cin>>item;
    cout<<"enter the quntatiy:"<<endl;
    cin>>quntatiy;

    result=checkit(country,item,quntatiy);
    cout<<result;

}  
float checkit(string country,string item,int quntatiy)
{
    float result;
    if(country == "sofia")
    {
        if(item == "cofee")
        {
            
            result = quntatiy*0.50;
        }
        else if(item=="water")

             {
                result=quntatiy*0.80;
             }
                    else if(item=="beer")

                            {
                                result=quntatiy*1.20;
                            }
                                            else if(item=="sweets")

                                                {
                                                    result=quntatiy*1.45;
                                                }
                                                  
                                                  
                                                   else if(item=="peanuts")

                                                            { 
                                                                result=quntatiy*1.60;
                                                            }
                                            return result;                 
    }
if(country=="plovdiv"_)
{
    if(item == "cofee")
        {
            
            result = quntatiy*0.40;
        }
        else if(item=="water")

             {
                result=quntatiy*0.70;
             }
                    else if(item=="beer")

                            {
                                result=quntatiy*1.15;
                            }
                                            else if(item=="sweets")

                                                {
                                                    result=quntatiy*1.30;
                                                }
                                                  
                                                  
                                                   else if(item=="peanuts")

                                                            { 
                                                                result=quntatiy*1.50;
                                                            }
                                            return result; 
                                                  
}
if(country=="varna")
{
if(item == "cofee")
        {
            
            result = quntatiy*0.45;
        }
        else if(item=="water")

             {
                result=quntatiy*0.70;
             }
                    else if(item=="beer")

                            {
                                result=quntatiy*1.10;
                            }
                                            else if(item=="sweets")

                                                {
                                                    result=quntatiy*1.35;
                                                }
                                                  
                                                  
                                                   else if(item=="peanuts")

                                                            { 
                                                                result=quntatiy*1.55;
                                                            }
                                            return result; 
}

}



 