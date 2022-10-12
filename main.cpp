#include <iostream>
#include "Tractrix.h"

using namespace ns;

int dialog (const char *what[]) {
    const char *errmess = "Incorrect value\nTry Again";
    int choose = 0;
    for (int i = 0; i < 7; i++)
        cout << what[i] << endl;
    do {
        enter(choose);
        if (choose <= 0 || choose > 7)
            cout << errmess << endl;
        else break;
    } while (1);
    if (choose == 7)
        return -1;
    return choose;
}

int menu(int choose, Traktrix traktrix) {
    Coordinate coordinate;
    double angle;
    if (choose == -1)
        return -1;
    cout << "Enter angle" << endl;
    enter(angle);
    switch (choose) {
        case 1:
            coordinate = traktrix.intersection(angle);
            cout << "x: " << coordinate.x << endl;
            cout << "y: " << coordinate.y << endl;
            break;
        case 2:
            cout << "length: " << traktrix.length(angle) << endl;
            break;
        case 3:
            cout << "radius of curvature: " << traktrix.radius(angle) << endl;
            break;
        case 4:
            cout << "area of an infinite strip: " << traktrix.firstSquare(angle) << endl;
            break;
        case 5:
            cout << "surface of the body of rotation: " << traktrix.secondSquare(angle) << endl;
            break;
        case 6:
            cout << "volume of the rotation body: " << traktrix.volume(angle) << endl;
            break;
        default:
            return 0;
    }
    return 0;
}

int main () {
    const char *what[] = {"1. Get coordinate", "2. Get arc length", "3. Get radius of curvature",
                          "4. Get the area of an infinite strip", "5. Get surface of the body of rotation",
                          "6. Get the volume of the rotation body", "7. Exit"};
    int flag;
    double length;
    cout << "Enter length of traktrix line" << endl;
    enter(length);
    Traktrix traktrix(length);
    do {
        flag = menu(dialog(what), traktrix);
        if (flag == -1)
            return 0;
    } while (1);
}
