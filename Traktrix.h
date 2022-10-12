#ifndef _TRACTRIX_H
#define _TRACTRIX_H
#include <iostream>

namespace ns {
    using std::cin;
    using std::cout;
    using std::endl;
    using std::bad_alloc;

    struct Coordinate {
        int x;
        int y;
        explicit Coordinate(double x = 0, double y = 0): x(x), y(y) {};
    };

    class Traktrix {
    private:
        double a;
    public:
        explicit Traktrix(double a = 1): a(a) {};

        [[nodiscard]] Coordinate intersection(double angle) const;
        [[nodiscard]] double length(double angle) const;
        [[nodiscard]] double radius(double angle) const;
        [[nodiscard]] double firstSquare(double angle) const;
        [[nodiscard]] double secondSquare(double angle) const;
        [[nodiscard]] double volume(double angle) const;
    };

    template <class T>
    int enter (T &a) {
        cin >> a;
        if (!cin.good()) {
            cout << "Error with cin \n Try again" << endl;
            return 1;
        } else
            return 0;
    }
}

#endif //_TRACTRIX_H
