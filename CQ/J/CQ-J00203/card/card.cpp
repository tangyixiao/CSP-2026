#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m,last;
int a[500005];
int ans[5000005];
vector<int> v;
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        if(a[i]==a[i-1]) last=i;
    }
    for(int i=1;i<=n;i++){
        for(int j=max(i,last);j<=n;j++){
            ans[a[j]]++;
        }
    }
    for(int i=1;i<=m;i++){
        cout << ans[i] << " ";
    }
    return 0;
}
/*
�⿨��ɶ���Ⱑ�� 
*/ 
