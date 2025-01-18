#include <iostream>
#include <iomanip>
 using namespace std;
int main() {

 int number, hours;
 float amount, salary;

 cin>>number;
 cin>>hours;
 cin>>amount;

 salary = hours*amount;

 cout<<"NUMBER = " <<number<<endl;
 cout<<"SALARY = U$ "<<fixed<<setprecision(2) <<salary<<endl;


    return 0;
}
