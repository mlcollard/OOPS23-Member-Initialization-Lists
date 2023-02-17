/*
    vectorField.cpp

    Demo program for member initialization lists
*/

#include <vector>

class A {
public:
    // constructor
    A();

private:
    std::vector<int> data;
};

// constructor
A::A() {
    // size data to 10,000 elements
    data.resize(10000)
}

int main() {

    A a;

    return 0;
}
