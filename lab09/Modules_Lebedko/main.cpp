#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

float s_calculation(float x, float y, float z)
{
    float S = pow(3 * sin(sqrt(12 * x + log10(x - 3))),y) + z/x;
    return S;
}

float task_9_1(float gsize)
{
    float res;

    if(gsize < 208)
    {
        res = gsize * 1.299;
    }
    else if(gsize < 500)
    {
        res = gsize * 1.788;
    }
    else if(gsize >= 500)
    {
        res = gsize * 3.645;
    }
    return res;
}

float task_9_2(float l)
{
    if(l==20.5)
    {
        cout << "UA=-; UK=1";
    }
    else if(l==21)
    {
        cout << "UA=-; UK=1,5";
    }
    else if(l==21.5)
    {
        cout << "UA=-; UK=2";
    }
    else if(l==22)
    {
        cout << "UA=-; UK=2,5";
    }
    else if(l==22.5)
    {
        cout << "UA=-; UK=3";
    }
    else if(l==23)
    {
        cout << "UA=35; UK=4";
    }
    else if(l==23,5)
    {
        cout << "UA=36; UK=4,5";
    }
    else if(l==24)
    {
        cout << "UA=36,5; UK=5";
    }
    else if(l==24.5)
    {
        cout << "UA=37; UK=5,5";
    }
    else if(l==25)
    {
        cout << "UA=38; UK=6";
    }
    else if(l==25.5)
    {
        cout << "UA=38/39; UK=6,5";
    }
    else if(l==26)
    {
        cout << "UA=40,5; UK=7,5";
    }
    else if(l==26.5)
    {
        cout << "UA=41; UK=8";
    }
    else if(l==27)
    {
        cout << "UA=41,5; UK=8,5";
    }
    else if(l==27.5)
    {
        cout << "UA=42; UK=9";
    }
    else if(l==28)
    {
        cout << "UA=42/43; UK=9,5";
    }
    else if(l==28.5)
    {
        cout << "UA=43; UK=10";
    }
    else if(l==29)
    {
        cout << "UA=44; UK=11";
    }
    else if(l==29.5)
    {
        cout << "UA=45; UK=11,5";
    }
    else if(l==30)
    {
        cout << "UA=46; UK=12";
    }
    else if(l==30.5)
    {
        cout << "UA=47; UK=12,5";
    }
    else if(l==31)
    {
        cout << "UA=47,5; UK=13";
    }
    else if(l==31.5)
    {
        cout << "UA=48; UK=14";
    }
    else if(l==32)
    {
        cout << "UA=48,5; RGB=14,5";
    }
    else
    {
        cout << "Некоректно введене значення!\n";
    }
}

int task_9_3(int num)
{
    int zeros = 0;
    int ones = 0;
    bool return_zeros = false;
    for (int i = 0; num > 0;i++){
        if (i == 11){
            if (num%2 == 0){
                return_zeros = true;
           }
        }
        if (num%2 == 1){
            ones++;
        }
        else {
            zeros++;
        }
        num >>= 1;
    }
    if (return_zeros){
        return zeros;
    }
    else{
        return ones;
    }
}

