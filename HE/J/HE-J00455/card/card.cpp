#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10;
#define int long long
typedef long long ll;
typedef pair <ll, char> pic;
int n, m, a[N];

int f[N]; int ans[N];
bool xingzhi1 = 1;

signed main(){
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    cin >> n >> m;
    for(int i = 1;i <= n;i ++) {
        cin >> a[i];
        if(!(a[i - 1] <= a[i])) xingzhi1 = 0;
        f[a[i]] = i;
    }
    if(xingzhi1) {
        for(int i = 1;i <= m;i ++) cout << f[i] << " ";
    }
    else if(n <= 1e4) {
        for(int i = 1;i <= n;i ++) {
            for(int j = 1;j <= m;j ++) f[j] = 0;
            vector <int> vec;


            for(int j = i;j <= n;j ++) {
                if(f[a[j]]) {

                    while(vec.size() && vec.back() != a[j]) {f[vec.back()] --, vec.pop_back();}
                    //cout << vec.size()<< endl;
                } else vec.push_back(a[j]), f[a[j]]++;
            }


            for(int x : vec) ans[x] ++;
        }
        for(int i = 1;i <= m;i ++) cout << ans[i] << " ";
    }

    return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
