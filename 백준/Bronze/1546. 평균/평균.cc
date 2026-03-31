#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    double score[1000];
    double maxScore = 0;

    for(int i = 0; i < N; i++){
        cin >> score[i];

       if(maxScore < score[i]){
        maxScore = score[i];
       }
    }
    double sum = 0;
    for(int i = 0; i < N; i++){
        score[i] = (score[i]/maxScore)*100;
        sum += score[i];
    }
    double avg = 0 ;
    avg = sum / N;

    cout << avg << "\n";

    return 0;
}