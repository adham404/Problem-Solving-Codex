// SnackQsecondAttempt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    long long n;
    cin >> n;
    long long target = n;
    long long input;
    vector<long long> snacks;
    vector<long long> snacksCompl(n,0);
    for (long long i = 0; i < n ; ++i) {
        cin >> input;
        snacks.push_back(input);

    }
    for (long long  i = 0; i < n; ++i) {
        if (snacks[i] == target) {
            cout << snacks[i] << " ";
            target--;
        }
        else {
            snacksCompl.insert(snacksCompl.begin() + snacks[i] - 1, snacks[i]);
        }
        if (target != 0) {
            while (snacksCompl[target - 1] == target) {
                cout << snacksCompl[target - 1] << " ";
                target--;
                if (target == 0)
                    break;
            }
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
