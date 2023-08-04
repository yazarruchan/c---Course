#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main(){

    vector<vector<vector<int>>> denemeVector{
        {{111,112,113},{121,122,123},{131,132,133}},
        {{211,212,213},{221,222,223},{231,232,233}},
        {{311,312,313},{321,322,323},{331,332,333}},
    };
    
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < 3; k++)
        {
            for (int i = 0; i < 3; i++)
            {
                cout << denemeVector.at(j).at(k).at(i) << ", ";
            }
            cout << endl;
        }

        cout << "------------------" << endl;
        
    }

    return 0;
}