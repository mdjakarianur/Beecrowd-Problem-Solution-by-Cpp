#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float A,B,C,D,cal;
    cin>>A;
    cin>>B;
    cin>>C;
    cin>>D;

    cal = (A*B-C*D);
    cout << "DIFERENCA = " << cal << endl;

    return 0;
}
