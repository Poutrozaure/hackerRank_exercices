#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

vector<int> parseInts(string str) {
    // Complete this function
    stringstream substring(str);    
    vector<int> result;
    int num;
    char comma;
    
    while (substring >> num) {
        result.push_back(num);
        substring >> comma;
    }
    return result;
 
}


int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
