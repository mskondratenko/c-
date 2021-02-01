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
    for(int i=0; i<(n / 2); i++){
        s.replace(i, 1, " ");
        s.replace(n-i, 1, " ");
        cout << s << endl;
    }
    return 0;
}

