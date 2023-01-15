#include<iostream>
using namespace std;
main()
{
    int price;
    string brand;
    cout<<"enter the brand neme"<<endl;
    cin>>brand;
    cout<<"enter the price";
    cin>>price;
    cout<<"buy the dress !";
    if(price<=1500 && brand=="j.")
    {
        cout<<"buy the adress";
    }
    if(price>15000 && brand!="j.")
{
    cout<<"do not buy";
}
}