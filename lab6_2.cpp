#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double degree) {
    return degree * M_PI / 180.0;
}

double rad2deg(double radian) {
    return radian * 180.0 / M_PI;
}

double findXComponent(double length1, double radian1, double length2, double radian2) {
    return length1 * cos(radian1) + length2 * cos(radian2);
}

double findYComponent(double length1, double radian1, double length2, double radian2) {
    return length1 * sin(radian1) + length2 * sin(radian2);
}

double pythagoras(double xComp, double yComp) {
    return sqrt(pow(xComp, 2) + pow(yComp, 2));
}

void showResult(double length, double direction) {
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << length << endl;
    cout << "Direction of the resultant vector (deg) = " << direction << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
}

int main() {
    double l1, l2, a1, a2, xComp, yComp, resultVecLength, resultVecDirection;

    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;

    a1 = deg2rad(a1);
    a2 = deg2rad(a2);

    xComp = findXComponent(l1, a1, l2, a2);
    yComp = findYComponent(l1, a1, l2, a2);

    resultVecLength = pythagoras(xComp, yComp);
    resultVecDirection = rad2deg(atan2(yComp, xComp));

    showResult(resultVecLength, resultVecDirection);

    return 0;
}

