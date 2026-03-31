#include <iostream>

using namespace std;

int main() {
    int remainders[42]={0};

    for(int i=0; i<10; i++){
        int A;
        cin >> A;

        remainders[A%42] = 1;
    }

    int count = 0;
    for(int i=0; i<42; i++){
        if(remainders[i]==1){
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}