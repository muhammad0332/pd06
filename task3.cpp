#include <iostream>
using namespace std;
main ()
{
    int date;
    string month;
    cout <<"Enter the date: ";
    cin >>date;
    cout <<"Enter the month: ";
    cin >>month;
    if(date>=21 && month=="march" || date <=19 && month=="april")
    {
        cout <<"Aries";
    }
    if(date>=20 && month=="april" ||date<=20 && month=="may")
    {
        cout <<"taurus";
    }  
    if(date>=21 && month=="may" ||date <=20 && month=="june")
    {
        cout <<"Gemini";
    }
    if(date>=21 && month=="june" || date<=22 && month=="july")
    {
        cout <<"cancer";

    }
    if (date>=23 && month=="july" || date<=22 && month=="august")
    {
        cout <<"Leo";
    }
    if (date>=23 && month=="august" || date<=22 && month=="september") 
    {
        cout<<"virgo";
    }
    if (date>=23 && month=="september" || date<=22 && month=="october")
    {
        cout<<"libra";
    }
    if (date>=23 && month=="october" || date<=21 && month=="november")
    {
        cout <<"scorpio";
    }
    if (date>=22 && month=="november" || date<=21 && month=="december")
    {
        cout <<"sagittaius";
    }
    if (date>=22 && month=="december" || date<=19 && month=="january")
    {
        cout <<"capricon";
    }
    if (date>=20 && month=="january" || date<=18 && month=="fabruary")
    {
        cout<<"aquarius";
    }
    if (date>=19 && month=="july" || date<=20 && month=="march")
    {
        cout <<"pisces";
    }
}