#include <iostream>
#include <locale.h>
#include <windows.h>
#include "Modules_Lebedko.h"

using namespace std;

void s_cal()
{

    int x, y, z, res;

    cout << "\n\nВведiть число x: ";
    cin  >>  x;

    cout << "\nВведiть число y: ";
    cin >> y;

    cout << "\nВведiть число z: ";
    cin >> z;

    res = s_calculation(x, y, z);

    cout << "\nРезультат: \a" << dec <<  res << endl;
}

void fFunc()
{
    float gSize, res;

    do{
    cout << "Введiть об'єм використаного природного газу за мiсяць: ";
    cin >> gSize;

    }while(gSize <= 0);
    res = task_9_1(gSize);

    cout << "\aСума до сплати за спожитий газ: " << res << " грн" << endl;
}

void sFunc()
{
    float l, r;

    do{
    cout << "\nВведiть розмiр взуття у сантиметрах: ";
    cin >> l;

    r = task_9_2(l);
    }while(32 < l || 20.5 >= l);
    cout << "\a" << r;


}

void tFunc()
{
    int input = -1;

        cout << "\n\nВведiть число: " << endl;
        cin >> input;
        if (input >= 0)
        {
            int d11 = 2048;
            if (input & d11)
            {
                cout << "\a\nЧисло двiйкових нулiв = " << task_9_3(input) << endl;
            }
        else
            {
                cout << "\a\nЧисло двiйкових одиниць = " << task_9_3(input) << endl;
            }
        }
}

int main()
{
    system("chcp 1251 & cls");
    char a, b;

    do{
    cout <<  "u - s_calculate\  r - task_9_2\
    \n t - task_9_1\     e - task_9_3";
    cout << "\nВведiть значення щоб викликати функцiю:" << endl;
    cin >> a;

    if(a == 'u')
    {
        s_cal();
        cout << "\nЯкщо бажаєте вийти з програми введiть 'w', щоб запустити програму потворно натиснiть 'i'";
        cin >> a;
        if(a == 'i'){
            s_cal();
        }
    }
    else if(a == 't')
    {
        fFunc();
        cout << "\nЯкщо бажаєте вийти з програми введiть 'w', щоб запустити програму потворно натиснiть 'i'";
        cin >> a;
        if(a == 'i'){
            fFunc();
        }
    }
    else if(a == 'r')
    {
        sFunc();
        cout << "\nЯкщо бажаєте вийти з програми введiть 'w', щоб запустити програму потворно натиснiть 'i'";
        cin >> a;
        if(a == 'i'){
            sFunc();
        }
    }
    else if(a == 'e')
    {
        tFunc();
        cout << "\nЯкщо бажаєте вийти з програми введiть 'w', щоб запустити програму потворно натиснiть 'i'";
        cin >> a;
        if(a == 'i'){
            tFunc();
        }
    }
    else if (a != 'w' && a != 'i')
        {
            cout << "\a\nНе вiрний ввод" << endl;
        }
    }while (a != 'w' && a != 'i');

    getchar();
}
