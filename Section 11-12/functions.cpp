#include <iostream>
#include <string>

using namespace std;

std::string reverse_string(const std::string &str);

int main(){

    string message_raw{"raw message"};
    cout << message_raw << endl;
    string message_rvr = reverse_string(message_raw);
    cout << message_rvr << endl;

    return 0;
}

std::string reverse_string(const std::string &str) {
    std::string reversed;
    // Write your code below this line
    size_t str_size = str.size();
    const char *last_chr = str.c_str()+str_size-1;
    for(int i{0};i<str_size;i++){
        //cout << *(last_chr-i) << endl;
        reversed.push_back(*(last_chr-i));
    }

    // Write your code abocve this line
    return reversed;
}