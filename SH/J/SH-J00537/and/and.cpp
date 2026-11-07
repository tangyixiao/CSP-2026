#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;
    cin >> n;
    int a[n+5];
    int result[n*(n-1)/2+5];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    int sum=0;
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            result[sum]==a[i]|a[j];
            sum++;
    }
    cout << result[n-2];
    }
return 0;
}
