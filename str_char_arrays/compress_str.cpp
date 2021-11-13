#include <iostream>
#include <string>


using namespace std;


string compress_str(string str) {
    int n = str.length();

    string output;

    for(int i = 0; i <  n; i++) {
        int count = 1;
        output += str[i];
        while(i < n -1 && str[i + 1] == str[i]){
            count++;
            i++;
        }
        if(count != 1) {
           output += to_string(count);
        }    
    }

    if(output.length() > str.length()) {
        return str;
    }
    return output;
}


int main() {

    string str = "hellohh";

    string result =  compress_str(str);

    cout << result;
    return 0;
}
 