#include <bits/stdc++.h>
using namespace std;

bool cmp(long long a,long long b){
    return a>b;
}


int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    vector<long long> a;
    long long n,m;
    cin >> n >> m;
    a.resize(n);

    if(m==n){
        long long ans;
        cin >> ans;
        a[0] = ans;
        for(int i = 1;i<n;i++){
            cin >> a[i];
            ans = ans&a[i];
        }
        cout << ans;
        return 0;
    }else if(m == 1){
        long long ans = -1;
        for(int i = 0;i<n;i++){
            cin >> a[i];
            ans = max(ans,a[i]);
        }
        cout << ans;
        return 0;
    }

    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end(),cmp);
    long long ans = -1;
    for(int i = 0;i<a.size()-m+1;i++){
    //int i = 0;
        long long sum = a[i];
        for(int j = i+1;j<i+m;j++){
            sum&=a[j];
        }
        ans = max(ans,sum);
        if(sum*10<ans) break;
    }
    cout << ans;
    return 0;
}
