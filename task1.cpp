#include <iostream>
using namespace std;
main ()
{
    string temp;
    string huminity;
    cout <<"Enter the temperature: ";
    cin >>temp;
    cout <<"Enter the huminity: ";
    cin >>huminity;
    if(temp=="warm" && huminity== "dry")
    {
        cout<<"play tenis";
    }
    if(temp=="warm" && huminity=="humid")
    {
        cout <<"swim";
    }
    if(temp=="cold" && huminity=="dry")
    {
        cout <<"play basket ball";
    }
    if(temp=="cold" && huminity=="humid")
    {
        cout <<"watch TV";
    }
}
