#include <iostream>
#include <string>

using namespace std;

bool checking(string lines[4]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            char c = lines[i][j];
            if (c == lines[i][j + 1] &&
                c == lines[i + 1][j] &&
                c == lines[i + 1][j + 1]) {
                return true;
            }
        }
    }
    return false;
}

string input_output()
{
    string lines[4];

    for (int i = 0; i < 4; i++)
    {
        getline(cin, lines[i]);
    }

    return checking(lines) ? "No" : "Yes";
}

int main() {
    cout << input_output();
    return 0;
}