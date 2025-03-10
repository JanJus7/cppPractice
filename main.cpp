#include <iostream>
using namespace std;
#define PRINT cout << "Hello World!" << endl;

int main() {
    []{ PRINT; }();
}
