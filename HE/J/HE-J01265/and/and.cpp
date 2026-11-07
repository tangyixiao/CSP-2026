#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    int ans1=0,ans2=a[0];
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            ans1=a[i];
            break;
        }
    }
    cout<<(m==1?ans2:ans1);
    fclose(stdin);
    fclose(stdout);
    return 0;
}
