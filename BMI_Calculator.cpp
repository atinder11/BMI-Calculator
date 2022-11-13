#include <iostream>
using namespace std;
int main()
{
    cout << "\tBMI Calculator";
    cout << endl;
    cout << endl;

    cout << "BMI Categories:\n";

    cout << "Underweight = <18.5\n";
    cout << "Normal weight = 18.5 - 24.9\n";
    cout << "Overweight = 25 - 29.9\n";
    cout << "Obesity = BMI of 30 or greater\n";

    float weight, height;
    cout << "\nEnter Weight(kg) ";
    cin >> weight;
    cout << "Enter Height(m): ";

    cin >> height;
    float bmi;
    bmi = (weight / (height * height));
    cout << endl;

    cout << "BMI : " << bmi << " kg/m^2";
    cout << endl;

    if (bmi <= 18.5)
    {
        cout << "\tUnderweight";
    }
    else if (bmi > 18.5 and bmi <= 24.9)
    {
        cout << "\tNormal weight";
    }

    else if (bmi > 25 and bmi <= 29, 9)
    {
        cout << "\tOverweight";
    }
    else if (bmi >= 30)
    {
        cout << "\tObesity";
    }
    else
    {
        cout << "\tERROR";
    }

    return 0;
}