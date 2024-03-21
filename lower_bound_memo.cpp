#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main() {

    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    //lower_bound と upper_bound 関数は使う前に sort する必要性あり

    // x 以上の値の中での最小値を取得する。
    cout << *lower_bound(a.begin(), a.end(), x) << endl;

    // x 以上の値の中での最小値の中でイテレータが最も小さいものを取得する。
    cout << lower_bound(a.begin(), a.end(), x) - a.begin() << endl;

    return 0;
}