#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Member {
    int age;
    string name;
};

bool compare(Member a, Member b) {
    return a.age < b.age;
}

int main() {
    int N;
    cin >> N;

    vector<Member> list(N);

    for (int i = 0; i < N; i++) {
        cin >> list[i].age >> list[i].name;
    }

    stable_sort(list.begin(), list.end(), compare);

    for (int i = 0; i < N; i++) {
        cout << list[i].age << " " << list[i].name << "\n";
    }

    return 0;
}