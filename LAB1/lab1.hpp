// swap
// round
// complex * number
// 3x3 transp

#include <iostream>
#include <cmath>
using namespace std;
#ifndef lab1_hpp
#define lab1_hpp
#include "lab1.hpp"

struct obed 
{
    float imaginary;
    float real; 
};

struct matrix
{
    int mtr;
};


void comp_ref() 
{
    cout << "Enter Imaginary, Real and multiplier:";
    float im, re, multik;
    cin >> im >> re >> multik;
    float &mnozh = multik;
    float &imaginary = im;
    float &real = re;
    imaginary = imaginary * mnozh;
    real = real * mnozh;
    cout << "Results of multiplying: " << imaginary << " " << real << endl;
}
void comp_p() 
{
    cout << "Enter Imaginary, Real and multiplier:";
    float im, re, multik;
    cin >> im >> re >> multik;
    float *mnozh = &multik;
    float *imaginary = &im;
    float *real = &re;
    *imaginary = *imaginary * *mnozh;
    *real = *real * *mnozh;
    cout << "Results of multiplying: " << *imaginary << " " << *real << endl;
}
void test_comp()
{
    int ima, rea, mu;
    ima = 5;
    rea = 6;
    mu = 9;
    if (ima * mu == 5 * 9) {cout << "COMP TEST WAS COMPLETED";}
    else {cout << "COMP TEST WAS not COMPLETED " << endl;}
    cout<<endl;
}

void transp_p()
{
    int a[3][3] = {{1,2,3},{6,5,4},{46,69,228}};
    int *temp = &a[3][3];

    
    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            *temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = *temp;
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
    
}
void transp_ref()
{
    int a[3][3] = {{1,2,3},{6,5,4},{46,69,228}};
    int &temp = a[3][3];

    
    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
}

void swap_ref()
{
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    int &ra = a;
    int &rb = b;
    
    int t = ra;
    ra = rb;
    rb = t;
    cout << "Swapped a and b: " << ra << " " << rb << endl;
    cout<<endl;
    
}
void swap_p()
{
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    int *ra = &a;
    int *rb = &b;
    
    int t = *ra;
    *ra = *rb;
    *rb = t;
    cout << "Swapped a and b: " << *ra << " " << *rb << endl;
    
}

void round_ref()
{
    float v;
    cout << "Enter unrounded number: ";
    cin >> v;
    float &temp1 = v;
    temp1 = round(temp1 * 1000)/1000;
    cout << "The result of rounding: " << temp1 << endl;
    cout<<endl;
}
void round_p()
{
    float v;
    cout << "Enter unrounded number: ";
    cin >> v;
    float *temp = &v;
    *temp = round(*temp * 1000)/1000;
    cout << "The result of rounding: " << *temp << endl;
}

#endif





