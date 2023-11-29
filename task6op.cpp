#include<iostream>
using namespace std;

string splash(string hardcore[][5], string input);


main()
{
    string input;
    string hardcore[5][5]={
        {".", ".", ".", "*", "*"},
        {".", "*", ".", ".", "."},
        {".", "*", ".", ".", "."},
        {".", "*", ".", ".", "."},
        {".", ".", "*", "*", "."}
    };
    cout<<"Enter the coordinates to fire the torpedo (e.g., A1, B3, E5): ";
    cin>>input;
    string check=splash(hardcore, input);
    cout<<"Result: "<<check;
}
string splash(string hardcore[][5], string input)
{
    string a;
    int row=input[0]-'A';
    int col=input[1]-'1';
    if(hardcore[row][col]==".")
    {
        a= "splash";
    }
    else if(hardcore[row][col]=="*")
    {
        a="BOOM";
    }
    return a;
}
