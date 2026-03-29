#include <iostream> 

using namespace std;

void findMinMax(int arr[], int size){
    int min = arr[0];
    int max = arr[0];

    for(int i=0; i<size ; i++){
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i]>max){
            max =arr[i];
        }
    }
    cout << min << " " << max;
}
int main() {
    int N;
    cin >> N;

    int* score = new int[N];

    for(int i=0; i<N; i++){
        cin >> score[i];
    }
    findMinMax(score, N);

    delete[] score;

    return 0;
}