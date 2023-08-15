#include<iostream>
#include<string>
#include<vector>
#include<conio.h>


using namespace std;

int main(){

    /*string un_full_name {"StephenHawking"};
    string first_name, last_name, full_name;
    vector <size_t> index_name;
    size_t last_name_index;

    string buffer;

    for(char a: un_full_name){
        if(isupper(a))
            index_name.push_back(un_full_name.find(a)); 
    }
    last_name_index = index_name[index_name.size()-1];
    first_name = un_full_name.substr(0,last_name_index);

    last_name = un_full_name.substr(last_name_index,un_full_name.size());

    swap(first_name,last_name);

    cout << "First Name: " << first_name << endl;
    cout << "Last Name: " << last_name << endl;

    full_name = first_name + last_name;
    full_name.insert(last_name_index," ");
    cout << "Full Name : " << full_name << endl;
    */

   string journal_entry_1 {"Isaac Newton"};
    string journal_entry_2 {"Leibniz"};
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    size_t index{0};
    index = journal_entry_1.find(" ");
    journal_entry_1.erase(0,index+1);
    
    if (journal_entry_1 > journal_entry_2)
    {
        swap(journal_entry_1,journal_entry_2);
    }
    

  
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << journal_entry_1 << "\n" << journal_entry_2;
    
    return 0;
}