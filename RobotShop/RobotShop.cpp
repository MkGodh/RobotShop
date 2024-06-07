#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N;
    int K;
    int index;
    int RobotNum;
    cout << "Please input N: ";
    cin >> N;
    vector<int> vec(N);
    for (int i = 0; i < N; i++) {
        cout << "Please input robot num: ";
        cin >> RobotNum;
        vec[i] += RobotNum;
    }
    cout << "There are robots on display {";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i];
        if (i != vec.size() - 1) {
            cout << ",";
        }
    }
    cout << "}" << "\n";


    cout << "Please input K: ";
    cin >> K;

    for (int i = 0; i < K; i++) {
        int answer = 0;
        cout << "Please input one to add or two to erase: " << "\n";
        cin >> answer;
        if (answer == 1) {
            cout << "Please input robot number: ";
            cin >> RobotNum;
            vec.push_back(RobotNum);
        }
        if (answer == 2) {
            cout << "Please input robot index: ";
            cin >> index;
            vec.erase(vec.begin() + index);
        }
        else {
            cout << "There is no such answer!";
        }
        cout << "Left on display {";
        for (int i = 0; i < vec.size(); i++) {
            cout << vec[i];
            if (i != vec.size() - 1) {
                cout << ",";
            }
        }
        cout << "}" << "\n";
    }
}