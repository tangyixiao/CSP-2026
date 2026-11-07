#include<bits/stdc++.h>
using namespace std;
int a[100000]={};
int a1[100000]={};
int m1[100000]={};
int main(){
    int n,m,s=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        a1[1]=a[n-i+1];
        a[n-i+1]=0;
        for(int j=1;j<=i-1;j++){
            if(a1[j]==a1[i]){
                for(int k=j;i<=i;j++){
                    a1[k]=0;
                }
                a[j]=a1[i];
            }
        }
        for(int i=1;i<=n;i++){
            s=a[i];
            m1[s]++;
        }
    }
    for(int i=1;i<=m;i++){
        cout<<m1[i];
    }

    return 0;
}


