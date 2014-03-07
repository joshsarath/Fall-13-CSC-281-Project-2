//
//  main.cpp
//  project1
//
//  Created by Josh Sarath on 9/19/13.
//  Copyright (c) 2013 Josh Sarath. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

float input();
float sort(float& a, float& b, float& c);
float swap(float& a, float&b);
int compute(float a, float b, float c);
int triangleTest(float a, float b, float c);

int main()
{
    float a,b,c;
    string triangle;
    a= input(); // for some reason a,b,c= input couldnt work so i needed if statements
    b= input();
    c= input();
    sort(a,b,c);
    cout<<"You entered "<<a<<", "<<b<<" and "<<c<<"\n";
    compute(a,b,c);
    return 0;
}

float input()
{ //asks the user for 3 lengths, return the value
    float a;
    cout<< "Enter a length. ";
    cin>> a;
    return a;
}

float sort(float& a, float& b, float& c)
{ //sorts into ascending order, passes by reference so no return value, variables will change in computers memory
    if (a > b)
        swap(a,b);
        if (b > c)
            swap(b,c);
            if (a>b)
                swap(a,b);
    else
        if (b>c)
            swap(b,c);
            if  (a>b)
                swap(a,b);
    
    return 0;
}

float swap(float& a, float& b)
{ //swaps the two numbers, just makes it easier than writing out repeatedly in input
    float temp;
    temp = a;
    a= b;
    b = temp;
    return 0;
}

int compute(float a, float b, float c)
{ //tests if actually a triangle
    if (a+b<=c)
       cout<<"This is not a triangle. ";
    else
        triangleTest(a, b, c);
    return 0; 
}

int triangleTest(float a, float b, float c)
{ //reports what type of triangle it is
    string triangle;
    if (c== sqrt(a*a+b*b))
        if (a==b)
            cout<<"This is a Right and Isosceles Triangle. ";
        else
            cout<<"This is a Right Triangle. ";
    else
        if (a==b || b==c)
            if (a==b && b==c)
                cout<<"This is an Equilateral Triangle. ";
            else
                cout<<"This is an Isoceles Triangle. ";
        else
            cout<< "This is a Triangle. ";
    return 0;
}
