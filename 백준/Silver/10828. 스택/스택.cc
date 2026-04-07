#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
   
    int n;
    cin >> n;

    vector<int> stack;

    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;

        if (command == "push") {
            int num;
            cin >> num;
        
            stack.push_back(num);
        } 
        else if (command == "pop") {
           
            if (stack.empty()) {
                cout << -1 << "\n";
            } else {
                cout << stack.back() << "\n";
                stack.pop_back();
            }
        } 
        else if (command == "size") {
            cout << stack.size() << "\n";
        } 
        else if (command == "empty") {
            if (stack.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        } 
        else if (command == "top") {
            if (stack.empty()) {
                cout << -1 << "\n";
            } else {
                cout << stack.back() << "\n";
            }
        }
    }

    return 0;
}