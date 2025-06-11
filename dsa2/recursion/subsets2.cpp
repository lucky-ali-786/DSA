#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findSubsets(string &str, int index, string current, vector<string> &result) {
    if (index == str.length()) {
        result.push_back(current);
        return;
    }

    // Include the current character
    findSubsets(str, index + 1, current + str[index], result);

    int nextIndex = index + 1;
    while (nextIndex < str.length() && str[nextIndex] == str[index]) {
        nextIndex++;
    }
    findSubsets(str, nextIndex, current, result);
}

int main() {
    string input = "aab";
    sort(input.begin(), input.end()); // Important: sort to group duplicates

    vector<string> uniqueSubsets;
    findSubsets(input, 0, "", uniqueSubsets);

    cout << "Unique subsets:\n";
    for (const string &s : uniqueSubsets) {
        cout << "\"" << s << "\"\n";
    }

    return 0;
}
