#include<bits/stdc++.h>
using namespace std;
int ji,b[500009]={0};
bool fin(int x){
    for(int i=x;i>=0;i--){
        if(b[i]==x){
            ji=i;
            return true;
        }
    }
    return false;
}
void qing(int x){
    for(int i=x;i>ji;i--){
        b[i]=0;
    }
}
int main(){
freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n,sum=0;
cin>>n>>m;
int a[n],s[m+5]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(fin(b[i])){
                qing(b][i]);
            }
        }
        int k=0;
        while(b[k]){
            sum++;
            k++;
        }
        if(k<=m){
            s[k]++;
        }
    }
    for(int i=1;i<=m;i++){
        cout<<s[i]<<" ";
    }
fclose(stdin);
fclose(stdout);
    return 0
}
