// Ques : https://codeforces.com/problemset/problem/1903/A

// Solution :

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int a;
  cin >> a;
  while (a--) {
    int b, c;
    cin >> b >> c;
    vector<int> arr;
    for (int i = 0; i < b; i++) {
      int x;
      cin >> x;
      arr.push_back(x);
    }
    bool chck{1};
    if (c == 1) {
      for (int i = 0; i < b - 1; i++) {
        if (arr[i] > arr[i + 1]) {
          chck = 0;
        }
      }
    }
    if (chck) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
