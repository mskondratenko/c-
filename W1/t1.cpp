#include <iostream>


using namespace std;

int main() {
    uint64_t a=1, b=2, c, sum;
    bool end=false;
    while(!end){
        if (a % 2 == 0 && a < 4'000'000) {
            sum += a;
        } else if(a > 4'000'000){
            end = true;
        }
        c = a + b;
        a = b;
        b = c;

    }
    cout << sum << endl;
    return 0;
