#include <iostream>
#include <cstring>

using namespace std;
    

int main() {
    string str;
    int width;
     // Get input from user
    cout << "Enter string and width🥲: ";
    cin >>str >>width;

    // Calculate number of spaces needed
    int spaces = width - str.length();
    int left_spaces = spaces / 2;
    int right_spaces = spaces - left_spaces;

    // Create centered string
    string centered_str = string(left_spaces, ' ') + str + string(right_spaces, ' ');
    // Output centered string
    cout << centered_str << endl;

    return 0;
}
    
    
    