#include <iostream>
#include <iomanip>
 using namespace std;

int main() {
 int a,b;
 float c, res;
 cin>>a;
 cin>>b;
 cin>>c;
 res=b*c;

 cin>>a;
 cin>>b;
 cin>>c;
 res+=b*c;

 cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<res<<endl;

    return 0;
}
