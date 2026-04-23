// Ques : https://codeforces.com/problemset/problem/1900/A

// Solution :

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int a;
  cin >> a;
  while (a--) {
    int b;
    cin >> b;
    string str1;
    cin >> str1;
    vector<int> arr;
    int cnt = 0;
    for (int i = 0; i < b; i++) {
      if (str1[i] == '#') {
        arr.push_back(cnt);
        cnt = 0;
      } else {
        cnt++;
      }
    }
    arr.push_back(cnt);
    int ans = 0;
    for (auto it : arr) {
      if (it < 3) {
        ans += it;
      } else {
        ans = 2;
        break;
      }
    }
    cout << ans << endl;
  }
}
