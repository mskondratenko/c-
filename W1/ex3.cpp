#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    for(int i=0; i<n; i++){
        s += "*";
    }
    for(int i=0; i<n; i++){
        cout << s << endl;
    }
    return 0;
}

