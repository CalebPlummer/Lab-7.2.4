/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: cplummer
 *
 * Created on October 31, 2017, 1:01 PM
 */

#include <iostream>
using namespace std;
//add your own exception class here 

float square_area (float Side)
{
    if(Side <= 0)
        throw string("Error");
    return Side * Side;
}

float rectangle_area(float Height, float Length)
{
    if(Height <= 0 || Length <= 0)
        throw string("Error");
    return Height * Length;
}

int main(void) {
float a, b, r; cin >> a;
cin >> b;
try
{
    float rsquare = square_area(a);
    float rrectangle = rectangle_area(a,b);
    cout << rsquare << endl << rrectangle << endl;
}
catch(string &exception)
{
   cout << "Please make sure the entered lengths are greater than 0." << endl;
   main();
}
return 0; 
}

