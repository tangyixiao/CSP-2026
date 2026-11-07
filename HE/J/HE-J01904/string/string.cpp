#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    cin>>n;
    int a[10004];
    char b[10005];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    char s[10002],f=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<a[i];j++){
            s[f]=b[i];
            f+=1;
        }
    }
    char w[10002],k=0;
    for(int i=f-1;i>=0;i--){
        w[k]=s[i];
        k++;
    }
    int cnt=0;
    for(int i=0;i<=f;i++){
        if(s[i]!=w[i]){
            cnt++;
        }
    }
    cout<<cnt/2;
    return 0;
}
