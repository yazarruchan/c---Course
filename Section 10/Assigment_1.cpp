#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main(){

    string message;
    getline(cin,message);

    for (size_t i = 1; i <= message.size(); i++)
    {
        size_t base {0};
        base = 2*i-1;
        cout << setw((message.size()+1)-i);
        for (size_t j = 0; j < base; j++)
        {
            if (j<i)
            {
                cout << message[j];
            }
            else
            {
                cout << message[(base-1)-j];
            }
            
        }
        
        cout << endl;
    }
    

    return 0;
}