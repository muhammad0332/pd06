#include <iostream>
using namespace std;
main ()
{
    string fruit;
    string day;
    float quantity;
    float price;
    cout <<"Enter the fruit:";
    cin >>fruit;
    cout <<"Enter the day: ";
    cin >>day;
    cout <<"Enter the quantity: ";
    cin >>quantity;
    if(day=="sunday")
       {
        if(fruit=="banana")
      {
        price=quantity*2.5;
      }
       else if(fruit=="apple")
    
        {
        price=quantity*1.25;
        }
       else if(fruit=="orange")
        {
       price=quantity*0.90;
         }
       else if(fruit=="grape")
        {
        price=quantity*1.60;
        }
       else if(fruit=="kiwi")  
        {
          price=quantity*3;
        }
          else if(fruit=="pineapple")
        {
          price=quantity*5.60;
          }
         else if(fruit=="grapes")
          {
            price=quantity*4.20;
            }
              cout <<"the total price:"<<price;
       }      
           if( day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"||day=="friday"||day=="saturday")
           {
                 if(fruit=="banana")
      {
        price=quantity*2.5;
      }
       else if(fruit=="apple")
    
        {
        price=quantity*1.20;
        }
       else if(fruit=="orange")
        {
       price=quantity*0.85;
         }
       else if(fruit=="grape")
        {
        price=quantity*1.45;
        }
       else if(fruit=="kiwi")  
        {
          price=quantity*2.70;
        }
          else if(fruit=="pineapple")
        {
          price=quantity*5.50;
          }
         else if(fruit=="grapes")
          {
            price=quantity*3.85;
          }
            cout <<"the total price:"<<price; 
           }   
   
    if(day!="sunday" && day!="monday"&& day!="tuesday"&& day!="wednesday"&& day!="thursday"&& day!="friday"&& day!="saturday"&& fruit!="banana"&& fruit!="apple"&& fruit!="orange"&& fruit!="grape"&& fruit!="pineapple"&& fruit!="kiwi"&& fruit!="grapes")
    {
      cout<<"error";
    }
   
}
