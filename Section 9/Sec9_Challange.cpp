#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;

int main(){
    char choice{0};
    vector <int> numbers;
    while (choice!='Q'||choice!='q')
    {
       
        cout << "P - Print numbers" << endl;
        cout << "A - Add number(s)" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display smallest number" << endl;
        cout << "L - Display largest number" << endl;
        cout << "Q - Quit" << endl;
        
        cout << "\nPlease choose what you want : ";
        cin >> choice;
        cout << endl;
        
        switch (choice)
        {
        case 'P':
        case 'p':
            {
                cout << "List of numbers : ";
                for(auto number: numbers){
                    cout << number << " ";
                }
                
            }
            break;
            
        case 'A':
        case 'a':
            {    cout << "How many number you want to add : ";
                int numAdd{0};
                cin >> numAdd;

                for(int i{1};i<=numAdd;i++){
                    int tempInput{0};
                    cout << i << "- ";
                    cin >> tempInput;
                    numbers.push_back(tempInput);
                    
                }
                cout << "All Added!" << endl;
            }
            break;
        
        case 'M':
        case 'm':
            {
                double mean{0},sum{0};
                if(numbers.size()==0){
                    cout << "List is empty!";
                    break;
                }
                for(auto num: numbers){
                    sum+=num;
                }
                mean=sum/numbers.size();
                cout << "Mean of list : " << mean;
            }
            break;
     
        case 'S':
        case 's':
            {
                int smallest{INT_MAX};
                if(numbers.size()==0){
                    cout << "List is empty!";
                    break;
                }
                for(auto num: numbers){
                    if (num<smallest)
                    {
                        smallest=num;
                    }
                    
                }
                cout << "Smallest number : " << smallest;
            }
            break;

        case 'L':
        case 'l':
            {
                int largest{INT_MIN};
                if(numbers.size()==0){
                    cout << "List is empty!";
                    break;
                }
                for(auto num: numbers){
                    if (num>largest)
                    {
                        largest=num;
                    }
                    
                }
                cout << "Largest number : " << largest;
            }
            break;

        case 'Q':
        case 'q':
            return 0;
            
        default:
            cout << "Illegal choice!" << endl;
            break;
        }


        cout << "\n---------------------------------" << endl;
        cout << endl;
        
    }
    
    return 0;
}