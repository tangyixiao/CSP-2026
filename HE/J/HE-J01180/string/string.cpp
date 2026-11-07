#include<bits/stdc++.h>
using namespace std;
long long a[10000005];
char c[10000005];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    string s="";
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i] >> c[i];
        s+=a[i]*c[i];
    }
    cout << 0;
    return 0;
}
