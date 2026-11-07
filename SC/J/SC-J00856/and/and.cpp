#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n=0,m=0,k=0;
    cin >> n >> m;
    int a[n]={0};
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    k=a[n-1];
    for(int i=1;i<m;i++){
        k=k&a[n-i-1];
    }
    cout << k;
    fclose(stdin);
    fclose(stdout);
    return 0;
}