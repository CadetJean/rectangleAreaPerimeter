#include <iostream>
using namespace std;

int main()
{
    //geting user to input the lenght and width
    int rectangleLenght, rectangleWitdh, rectangleArea, rectanglePerimeter;
    cout << "Enter the Lenght of the rectangle: ";
    cin >> rectangleLenght;

    cout << "Enter the width of the rectangle: ";
    cin >> rectangleWitdh;

    //formula used to find solution
    rectangleArea = rectangleWitdh * rectangleLenght;
    rectanglePerimeter = 2 * (rectangleArea + rectangleLenght);

    //clear the screen once the user is done
    cout << "\x1b[2J\x1b[H";

    //printing out the result
    cout << "the area of the rectangle is: " << rectangleArea << endl;
    cout << "the perimeter of the rectangle is: " << rectanglePerimeter << endl;

    return 0;
}