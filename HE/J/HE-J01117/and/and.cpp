#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int tobi(int x){
    int sum2=0,f=1;
    while(x!=0){
        sum2+=(x%2)*f;
        f*=10;
        x/=2;
    }
    return sum2;
}
int tot(int x){
int f=1,sum1=0;
    while(x!=0){
        sum1+=(x%10)*f;

        f*=2;
        x/=10;
            }
    return  sum1;
}
int asum(int x,int y){
    int sum=0,f=1;

    while(x!=0&&y!=0){

        if(x%10==y%10&&x%10==1){
            sum+=f;
        }
        f*=10;
        x/=10;
        y/=10;
    }

    return tot(sum);
}


int n,m,a[1000];
int main(){
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int mx=-1;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    if(m==1){
        for(int i=1;i<=n;i++){
            if(mx<a[i]){
                mx=a[i];
            }
        }
        cout<<mx;
        return 0;
    }
    else if(m==n){
        for(int i=2;i<=n;i++){
            a[i]=asum(tobi(a[i]),tobi(a[i-1]));
        }
        mx=a[n];
        cout<<mx;
        return 0;
    }
    else if(m==2){
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){

                mx=max(mx,asum(tobi(a[i]),tobi(a[j])));
            }

        }
        cout<<mx;
    }

	return 0;
}





