#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//v = nome vendedor
//s = salario
//b = bonus

int main (){
    string v;
    double s,b;
    cin >> v;
    cout << fixed << setprecision(2);
    cin >> s >> b;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << b*0.15+s << endl;
    return 0;
}