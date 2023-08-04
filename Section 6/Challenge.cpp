#include<iostream>

using std::cout;
using std::cin;
using std::endl;


int main(){
    /*  Small room  25
        Big room    35
        tax         %6
    */
    const float SmallRoomPrice {50};
    const float BigRoomPrice {75};
    const float TaxRate {0.2};
    const int EstValidDay {30};

    int smallRoomNum {0}, bigRoomNum {0};

    cout << "Hali Yikama Servisimize Hos Geldiniz." << endl;
    cout << "Kucuk oda bedeli " << SmallRoomPrice << "TL dir" << endl;
    cout << "Buyuk oda bedeli " << BigRoomPrice << "TL dir" << endl;

    cout << "Kucuk oda sayisini giriniz: ";
    cin >> smallRoomNum;
    cout << "Buyuk oda sayisini giriniz: ";
    cin >> bigRoomNum;
    cout <<"-------------------------------" <<endl;

    float smallRoomTotalPrice {smallRoomNum*SmallRoomPrice};
    float bigRoomTotalPrice {bigRoomNum*BigRoomPrice};
    float totalPrice = bigRoomTotalPrice+smallRoomTotalPrice;
    float totalTax = totalPrice * TaxRate;

    cout << "Kucuk oda sayisi : " << smallRoomNum << endl;
    cout << "Buyuk oda sayisi : " << bigRoomNum << endl;
    cout << "Yikama bedeli : " << totalPrice << endl;
    cout << "Vergi (%" << TaxRate*100 << ") : " << totalTax << endl;
    cout << "Toplam Vergi Dahil : " << totalPrice+totalTax << endl;
    cout << "Fiyatlarimiz " << EstValidDay << " Gun Gecerlidir." << endl;







}