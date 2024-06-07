#include <iostream>
#include <vector>

using namespace std;

int main() {


    int N;
    int M;
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


    cout << "Please input M: ";
    cin >> M;
    for (int i = 0; i < M; i++) {
        cout << "Please input robot index: " << "\n";
        cin >> index;
        if (index > vec.size() || index < 0) {
            cout << "There is no such index" << "\n";
        }
        vec.erase(vec.begin() + index);

        cout << "Left on display {";
        for (int i = 0; i < vec.size(); i++) {
            cout << vec[i];
            if (i != vec.size() - 1) {
                cout << ",";
            }
        }
        cout << "}";
    }

}