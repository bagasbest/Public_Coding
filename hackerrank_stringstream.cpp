#include <bits/stdc++.h>
using namespace std;

vector<int> parseInts(string s) {
	// Complete this function
    stringstream ss(s);
    vector <int>result;
    char ch;
    int temp;
    while (ss >> temp){
        result.push_back(temp);
        ss >> ch;
    }
    return result;
}

int main() {
    string s;
    cin >> s;
    int i;
    vector<int> integers = parseInts(s);

    for(i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
