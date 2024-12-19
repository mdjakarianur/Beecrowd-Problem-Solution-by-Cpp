#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double pi = 3.14159;
    double R, area;

    cin >> R;

    area = pi * R * R;

    cout << "A=" << fixed << setprecision(4) << area << endl;

    return 0;
}
