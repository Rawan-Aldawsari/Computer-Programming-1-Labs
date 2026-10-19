
#include <iostream>
using namespace std;

int main()
{
    double radius, area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = 3.14 * radius * radius;

    cout << "Area of the circle = " << area << endl;

    system("PAUSE");
    return 0;
}