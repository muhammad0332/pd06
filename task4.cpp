#include <iostream>
using namespace std;
main ()
{
char type;
char time;
int min;
float charge;
cout <<"Enter the type: ";
cin >>type;
cout <<"Enter the time(d for day and n for night): ";
cin >>time;
cout <<"Enter the minutes: ";
cin>>min;
if (type=='r' )
{
    if(min<=50)
    {
        charge=10;
    }
    if(charge>50)
    {
     charge=(min-50)*0.20+10;
    }
     cout <<"The total charge is: "<<charge;
}
if(type=='p'&&time=='d' )
{
    if(min<=75)
    {
    charge=25;
    }
    if(min>75)
    {
    charge=(min-75)*0.10+25;
    }
     cout <<"The total charge is: "<<charge;
}
if(type=='p'&& time=='n')
{
    if(min<=100)
    {
        charge=25;
    }
    if(min>100)
    {
    charge=(min-100)*0.1+25;
    }
     cout <<"The total charge is: "<<charge;
    
}

}