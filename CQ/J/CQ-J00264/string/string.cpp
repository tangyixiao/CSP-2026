/* encoding: utf-8 */
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int N = 2e5+5;

int n, idx[N], len[N], ans;
char chr[N];

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> len[i] >> chr[i];
        idx[i] = idx[i - 1] + len[i - 1];
    }
    int i = 1, j = n;
    while (i <= j) {
        if (len[i] < len[j]) {
            ans += len[i] * (chr[i] != chr[j]);
            len[j] -= len[i];
            ++i;
        } else if (len[i] > len[j]) {
            ans += len[j] * (chr[i] != chr[j]);
            len[i] -= len[j];
            --j;
        } else {
            ans += len[i] * (chr[i] != chr[j]);
            ++i;
            --j;
        }
    }
    cout << ans << endl;
    return 0;
}

/* My checker */
/*
# Made by Libaray

import os

file = input('enter the file name: ')
folder = f'../down/{file}'
cnt = len(os.listdir(folder)) // 2
os.system(f'g++ ./{file}.cpp -o ./{file} -static -O2 -std=c++14')
for i in range(1, cnt + 1):
    os.system(f'./{file} < ../down/{file}/{file}{i}.in > ./{file}{i}.out')
    my = open(f'./{file}{i}.out', 'r', encoding='utf-8')
    ans = open(f'../down/{file}/{file}{i}.ans', 'r', encoding='utf-8')
    if my.read() == ans.read():
        print('Correct completely!')
    else:
        print(f'Wrong answer on test #{i}')
        break
*/