#include <iostream>
using namespace std;


class Test {
public:
    virtual int square(int n) = 0;
};


class Arithmetic : public Test {
public:
    int square(int n) {
        return n * n;
    }
};

int main() {
    Arithmetic obj;
    int num = 6;

    cout << "Square of " << num << " = " << obj.square(num);

    return 0;
}