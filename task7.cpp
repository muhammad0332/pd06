#include <iostream>
using namespace std;
main ()
{
    int hour1;
    int hour2;
    int min1;
    int min2;
    float mn1;
    float mn2;
    cout <<"Exam starting time(hour): ";
    cin >>hour1;
    cout <<"Exam starting time(minutes):";
    cin >>min1;
    cout <<"student hour of arrival:";
    cin >>hour2;
    cout <<"student minutes of arrival:";
    cin >>min2;
    mn1=hour1*60+min1;
    mn2=hour2*60+min2;
    if(mn1>mn2)
    {
        cout <<"early"<<mn1-mn2;
    }
    if(mn1<mn2)
    {
        cout <<"late"<<mn2-mn1;
    }
    if(mn1==mn2)
    {
        cout <<" on time"<<mn1-mn2;
    }
    
}
