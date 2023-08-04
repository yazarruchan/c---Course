#include<iostream>
#include<climits>
#include<cfloat>
#include<iomanip>

using namespace std;

int main(){
    /*
    cout << "Boolen " << sizeof(bool)*8 << " Bits" << endl;
    cout << "Short " << sizeof(short)*8 << " Bits" << endl;
    cout << "Int " << sizeof(int)*8 << " Bits" << endl;
    cout << "Long " << sizeof(long)*8 << " Bits" << endl;
    cout << "Long Long " << sizeof(long long)*8 << " Bits" << endl;
    cout << "Double " << sizeof(double)*8 << " Bits" << endl;
    cout << "Long Double " << sizeof(long double)*8 << " Bits" << endl;
*/
    int number1 {55};
    int number2 {7};
    float subs {0};

    subs = static_cast<float> (number1) / number2;
    
    cout << fixed << setprecision(2) << subs << endl;
    return 0;
}