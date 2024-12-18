#include <iostream>
#include "Call.h"
using namespace std;

int main() {
    int sum = Call::cdeclCall(1, 2, 3);
    cout << "cdeclCall res: " << sum << endl;
    return 0;
}