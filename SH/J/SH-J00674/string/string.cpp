#include<iostream>
using namespace std;
string a;
char cha[int(2e5)+5];
int nums[int(2e5)+5];
signed main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n; cin >> n;
    unsigned long long numcnt = 0;
    for(int i = 1; i <= n; i++){
        cin >> nums[i] >> cha[i];
        numcnt += nums[i];
    }

    a.resize(numcnt);
    int idx = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= nums[i]; j++){
            a[idx] = cha[i];
            idx++;
        }
    }

    int res = 0;
    for(int i = 0; i < a.size() / 2; i++){
        if(a[i] != a[a.size()-1-i])res++;
    }
    cout << res;
    return 0;
}