#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{

    float weigth = 0;
    float heigth = 0;
    float result = 0;

    cout << "calculate for index corporal status (ICS)\n";

    cout << "enter your weigth in kg: ";
    cin >> weigth;
    cout << "enter your height in meters: ";
    cin >> heigth;
    // calculate el inc

    result = weigth/pow(heigth,2);
    cout<<"su ICS: "<<setprecision(4)<<result<<"kg/wh";




    return 0;
}
