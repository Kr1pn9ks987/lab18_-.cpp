// lab18_Габестро.cpp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Vector {
private:
    double x, y;

public:
    
    Vector(double x = 0, double y = 0) : x(x), y(y) {}

    Vector operator+(const Vector& v) const {
        return Vector(x + v.x, y + v.y);
    }

    void print() const {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }

    double getX() const { return x; }
    double getY() const { return y; }
};

int main() {
    setlocale(LC_CTYPE, "ukr");

    Vector v1(3, 4);
    Vector v2(1, 2);

    std::cout << "Початкові вектори:" << std::endl;
    std::cout << "v1 = "; v1.print();
    std::cout << "v2 = "; v2.print();

    Vector v3 = v1 + v2;
    std::cout << "v1 + v2 = "; v3.print();

    return 0;
}
