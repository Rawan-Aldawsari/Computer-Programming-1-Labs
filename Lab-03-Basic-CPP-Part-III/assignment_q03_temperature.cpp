
#include <iostream>
using namespace std;

int main()
{
    double celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (5.0 / 9.0) * celsius - 32;

    cout << "Temperature in Fahrenheit = "
         << fahrenheit << endl;

    system("PAUSE");
    return 0;
}