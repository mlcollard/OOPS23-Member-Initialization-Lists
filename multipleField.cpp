/*
    multipleField.cpp

    Demo program for member initialization lists
*/

#include <vector>

class A {
public:
    // constructor
    A();

private:
    const int n;
    std::vector<int> data;
};

// constructor
A::A() : data(10000, ' '), n(5) {
}

int main() {

    A a;

    return 0;
}
