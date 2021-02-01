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
        s = s.substr(0, s.size() - 1);
        cout << s << endl;
    }
    return 0;
}
