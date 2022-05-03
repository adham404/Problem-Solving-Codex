// SnackTower.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int target = n;
    int input;
    vector<int> snacks(n);
    vector<int> snacksCompl(n,0);
    for (int i = 0; i < n; ++i) {
        cin >> input;
        snacks.push_back(input);
    }
    for (int i = 0; i < n; ++i) {
        if (snacks[i] == target) {
            cout << snacks[i]; 
        }
        else {
            snacksCompl.insert(snacksCompl.begin() + snacks[i] - 1 , snacks[i]);
        }
        target--;
        if (snacksCompl.at(target) != 0) {
            cout << snacksCompl.at(target);
        }
        cout << "\n";
    }


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
