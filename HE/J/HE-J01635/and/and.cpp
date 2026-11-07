#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;
    cin>>n>>m;
    long long  a[100000]={};
    long long  b[100000]={};
    long long  c[100000]={};

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<m;i++){
        int max=0;
        for(int j=0;j<n;j++){
            if(a[j]>max && b[j]==0){
                max=a[j];
                b[j]=1;
            }
        }
        c[i]=max;
    }
    int ans=c[0];
    for(int i=1;i<m;i++){
        ans=ans&c[i];
    }
    cout<<ans;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
