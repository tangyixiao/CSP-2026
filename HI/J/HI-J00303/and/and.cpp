#include <bits/stdc++.h>
using namespace std;
long long  a[10000000];
int main() {
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    long long n,m,sum=0;cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    
	
    for(long long i=100;i>=0;i--) {
        long long ls=sum|(1<<i);
        long long cnt=0;
    for(long long j=1;j<=n;j++){
            if((a[j]&ls)==ls)cnt++;
    }
    if(cnt>=m){
        sum=ls;
    }
    
	}

    cout<<sum;
    return 0;
}

