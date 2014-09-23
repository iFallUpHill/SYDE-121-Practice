/* Program to calculate the area of 3 rectangles simultaneously. User will input
the height followed by the width , separated by a space and should then press the return key.
This process is repeated 3 times, then the program will print our the results in a chart.

Completed as part of in-class C++ learning activity for SYDE 121.
*/

#include <iostream>

using namespace std;

int main()
{
    double height[3] = {0, 0, 0};
    double width[3] = {0, 0, 0};
    double area[3] = {0, 0, 0};

    cout << "Please input the dimensions of 3 separate rectangles as prompted." << endl;
    cout << "After inputting each number, press return." << endl << endl;

    for(int i = 0; i < 3; i++)
    {
        cout << "Height of Rectangle " << i+1 << ": ";
        cin >> height[i];
        cout << "Width of Rectangle " << i+1 << ": ";
        cin >> width[i];
        cout << endl;
    }

    cout << "\n*************************************************************************" << endl << endl;;
    cout << "|\t Height \t|\t Width  \t|\t Area   \t|" << endl;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4);

    for(int j = 0; j < 3; j++)
    {
        area[j] = height[j] * width[j];
        cout << "|\t " << height[j] << " \t|\t " << width[j] << " \t|\t " << area[j] << " \t|" << endl;
    }

    return 0;
}
