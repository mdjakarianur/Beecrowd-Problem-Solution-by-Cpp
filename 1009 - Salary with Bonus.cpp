#include <iostream>
#include <iomanip>
 using namespace std;
int main() {

 string name;
 double salary=0, sale, total;

 getline(cin,name);
 cin>>salary;
 cin>>sale;

 total = salary+(sale*0.15);

 cout<<"TOTAL = R$ "<<fixed <<setprecision(2) <<total<<endl;


    return 0;
}
