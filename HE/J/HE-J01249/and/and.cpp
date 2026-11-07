#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main(){
    int n,m,sum=0,s=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    if(m<3){

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==i)
                break;
            if(a[i]|a[j]>sum)
                sum=a[i]|a[j];
        }
    }
    }
    else {
        for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==i)
                break;
            if(a[i]|a[j]>s)
                s=a[i]|a[j];
        }
    }
        for(int i=1;i<=m-2;i++){
            for(int j=1;j<=n;j++){
                if(s|a[j]>sum)
                    sum=s|a[j];
            }
        }
    }
    cout<<sum;
    return 0;
}


