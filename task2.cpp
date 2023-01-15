#include <iostream>
using namespace std;
main ()
{    
    int mark1,mark2,mark3,mark4,mark5,total,obtained;
    string name;
    float percentage;
    cout <<"Enter the name of student:";
    cin >>name;
    cout <<"Enter the mark of English : ";
    cin >>mark1;
    cout <<"Enter the mark of math : ";
    cin >>mark2;
    cout <<"Enter the mark of chemistry: ";
    cin>> mark3;
    cout <<"Enter the mark of socialogy science:";
    cin >>mark4;
    cout <<"Enter the mark of biology:";
    cin >>mark5;
    cout<<"Enter the total marks:";
    cin >>total;
    obtained=mark1+mark2+mark3+mark4+mark5;
    percentage=obtained*100/total;
    if(percentage>=90 && percentage<=100)
     {
        cout <<"A+ grade";
     }
     if(percentage>=80 && percentage<=90)
      {
        cout <<"A grade";
      }
      if (percentage >=70 && percentage <=80)
      {
        cout <<"B+ grade";
      }
      if(percentage>=60 && percentage<=70)
      {
        cout <<"B grade";
      }
      if(percentage >=50 && percentage <=60)
      {
        cout <<"c grade";
      }
      if (percentage>=40 && percentage<=50)
      {
        cout <<"D grade";
      }
      if(percentage<40)
      {
        cout <<"F grade";
      }
}
