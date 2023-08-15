#include<iostream>
#include<string>
#include<vector>


using namespace std;

string find_and_change(string alphabet, string key, string raw_str);

int main(){
    cout << endl;
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
    //string key_cphr{"abjntdepqzcirsuhoklvwxyfgmUZJDGQXYNKLWIEFVOHCPAMBRST"};
    string key_cphr{"ZJqhKLWI zcOMsDvwxyfuiUbrVBGQXYAjpHCnEFtdoklRSTNePgma"};
    
    size_t letter_pos {0};
    string message_raw, message_cphr, message_decphr;

    //message_raw = "Merhaba! bu +mesaj basit% bir ^sekilde sifrelenmistir.";
    cout << "sifrelenecek mesaji giriniz:" << endl;
    getline(cin,message_raw);

/*

    for (auto letter: message_raw)
    {
        letter_pos = alphabet.find(letter);
        if (letter_pos!=string::npos)
        {
            message_cphr += key_cphr[letter_pos];
        }
        else
        {
            message_cphr += letter;
        }

    }

     for (auto letter: message_cphr)
    {
        letter_pos = key_cphr.find(letter);
        if (letter_pos!=string::npos)
        {
            message_decphr += alphabet[letter_pos];
        }
        else
        {
            cout << "karakter (" << letter << ") bulunamadi!" << endl;
            message_decphr += letter;
        }      
        
    }
*/   
    
    message_cphr = find_and_change(alphabet, key_cphr,message_raw);

    message_decphr = find_and_change(key_cphr, alphabet, message_cphr);

    cout << "Raw        : " << message_raw << endl;
    cout << "Ciphered   : " << message_cphr << endl;
    cout << "Deciphered : " << message_decphr << endl;
    
    cout << endl;
    
    return 0;
}


string find_and_change(string alphabet, string key, string raw_str){
    

    size_t ch_pos {0};
    string change_str;

    for (auto letter: raw_str)
    {
        ch_pos = key.find(letter);
        if (ch_pos!=string::npos)
        {
            change_str += alphabet[ch_pos];
        }
        else
        {
            cout << "karakter (" << letter << ") bulunamadi!" << endl;
            change_str += letter;
        }      
        
    }
    return change_str;
}