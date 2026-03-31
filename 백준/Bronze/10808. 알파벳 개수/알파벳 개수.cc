#include <iostream>

using namespace std;

int main() {
    string S;
    cin >> S ;

    for(int i='a'; i<='z'; i++){
        int count=0;

        for(int j=0; j<S.length(); j++){
            if(S[j]==i){
                count++;
            }
        }
        cout << count << " ";
    }
    return 0;
}