#include <iostream>
using namespace std;

namespace first {
    int func() {
        return 5;
    }
}

namespace second {
    int func() {
        return 10;
    }
}

int main() {
    cout << first::func() << "\n";
    cout << second::func() << "\n";
    return 0;
}