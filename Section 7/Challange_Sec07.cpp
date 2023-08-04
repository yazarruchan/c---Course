#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main(){

    vector <int> vector1, vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    vector2.push_back(100);
    vector2.push_back(200);

    vector <vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "Vector_2d" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int k = 0; k < 2; k++)
        {
           cout << vector_2d.at(i).at(k) <<",";
        }
        cout << endl;
        
    }

    vector1.at(0)=1000;
    cout << "After change vector1(0)" << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int k = 0; k < 2; k++)
        {
           cout << vector_2d.at(i).at(k) <<",";
        }
        cout << endl;
        
    }
    cout << "vector1 "<< endl;  
    for (int k = 0; k < 2; k++)
        {
            cout << vector1.at(k) <<",";
        }
    cout << endl;

    return 0;
}