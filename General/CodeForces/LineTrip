// Ques : https://codeforces.com/problemset/problem/1901/A

// Solution :

#include <climits>
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
    arr.push_back(0);
    int cnt = INT_MIN;
    for (int i = 1; i <= b; i++) {
      int x;
      cin >> x;
      arr.push_back(x);
      cnt = max(cnt, x - arr[i - 1]);
    }
    cnt = max(cnt, 2 * (c - arr[b]));
    cout << cnt << endl;
  }
}
