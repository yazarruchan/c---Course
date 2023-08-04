#include<iostream>
#include<iomanip>

using namespace std;


int main(){

    int cent{0}, centTemp{0};
    const int DOLLAR{100}, QUARTER{25}, DIME{10}, NICKEL{5}, PENNY{1};
    const int changeVal[5] {DOLLAR,QUARTER,DIME,NICKEL,PENNY};
    const string changeName[5] {"DOLLAR","QUARTER","DIME","NICKEL","PENNY"};
    int changesList[5] {0};

    cout << "Enter amount of cents : ";
    cin >> cent;
    centTemp=cent;
    cout  << "Provide Changes As:" << endl;
    for (int i = 0; i < 5; i++)
    {
        changesList[i] = centTemp / changeVal[i];
        centTemp %= changeVal[i];
        cout << setw(7)<< left << changeName[i] << " : " << setw(2) << right << changesList[i] << " amount" << endl;
    }
    

    


    return 0;

}