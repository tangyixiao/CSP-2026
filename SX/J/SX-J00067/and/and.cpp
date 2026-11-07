#include<bits/stdc++.h>
using namespace std;
int a[200010];
int dp[2000][2000];
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;
    cin>>n>>m;
    int maxx=0;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	if(maxx<a[i]){
    		maxx=a[i];
		}
	}
    if(m==1){
        cout<<maxx;
	}else if(m==n){
		int cnt=a[1];
		for(int i=2;i<=n;i++){
			cnt=(cnt&a[i]);
		}
		cout<<cnt;
	}
	return 0;
}