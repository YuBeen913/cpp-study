#include <iostream>
#include <algorithm>

using namespace std;

int basket[101];

void swapBalls(int i, int j){
    swap(basket[i], basket[j]);
}

int main() {
    int N, M;
    cin >> N >> M;

    for(int i=1; i<=N; i++){
        basket[i]=i;
    }
    for(int k=0; k<M; k++){
        int i, j;
        cin >> i >> j;

        swapBalls(i, j);
    }
    for(int i=1; i<=N; i++){
        cout << basket[i] << (i==N?"\n":" ");
    }
}

