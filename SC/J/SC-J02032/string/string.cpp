#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,a[200005],pre[200005],pre2[200005];
char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		pre[i]=pre[i-1]+a[i];
	}
	pre2[n+1]=pre[n]+1;
	for(int i=n;i>=1;i--){
		pre2[i]=pre2[i+1]-a[i];
	}
	int cnt=0,ls=1,rs=pre[1],is=1,lt=pre2[n],rt=pre[n],it=n;
	while(rs<=lt){
//		cout<<ls<<" "<<rs<<" "<<is<<" "<<lt<<" "<<rt<<" "<<it<<" "<<cnt<<"\n";
		if(rs-ls+1==rt-lt+1){
			if(c[is]!=c[it]){
				cnt+=(rs-ls+1);
			}
			ls=rs+1,rs=pre[++is];
			rt=lt-1,lt=pre2[--it];
		}else if(rs-ls+1<rt-lt+1){
			if(c[is]!=c[it]){
				cnt+=(rs-ls+1);
			}
			rt-=(rs-ls+1);
			ls=rs+1,rs=pre[++is];
		}else{
			if(c[is]!=c[it]){
				cnt+=(rt-lt+1);
			}
			ls+=(rt-lt+1);
			rt=lt-1,lt=pre2[--it];
		}
	}
	cout<<cnt;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/