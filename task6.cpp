#include <iostream>
using namespace std;
main ()
{
 string month;
int stay;
float charge1;
float charge2;
cout <<"Enter the month: ";
cin >>month;
cout<<"Enter the number of stay: ";
cin >>stay;
if(month=="may" || month=="october")
{
 charge1=stay*50;
 charge2=stay*65;
 if(stay<=7)
 {
    cout <<"the charge of studio= "<<charge1<<endl;
    cout<<"the charge of appartment="<<charge2<<endl;
 }
  if(stay>7 &&stay<14)
 {
cout <<"the charge of studio= "<<charge1*0.95<<endl;
cout<<"the charge of appartment="<<charge2<<endl;
 }
  if(stay>14)
{
    cout <<"the charge of studio= "<<charge1*0.70<<endl;
    cout<<"the charge of appartment="<<charge2*0.90<<endl;
}
}
if(month=="june"||month=="september")
{
    charge1=stay*75;
    charge2=stay*68.70;
    if(stay<=14)
    {
       cout <<"the charge of studio= "<<charge1<<endl;
      cout<<"the charge of appartment="<<charge2<<endl;
    }
    if(stay>14)
    {
  cout <<"the charge of studio= "<<charge1*0.80<<endl;
  cout<<"the charge of appartment="<<charge2*0.90<<endl;
    }  
}
if(month=="july"||month=="august")
{
    charge1=stay*76;
    charge2=stay*77;
    if(stay<=14)
    {
         cout <<"the charge of studio= "<<charge1<<endl;
        cout<<"the charge of appartment="<<charge2<<endl;     
    }
    if(stay>14)
    {
    cout <<"the charge of studio= "<<charge1<<endl;
     cout<<"the charge of appartment="<<charge2*0.90<<endl;
    }
}
}