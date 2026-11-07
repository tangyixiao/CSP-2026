#include<bits/stdc++.h>
using namespace std;
const long long  N=(1<<31)-1;
int n,m;
long long dp[200005];
int a[200005],ls[200005][32],h;
void le(int k,int sum,int cnt){
	if(k==m){
		h=max(h,cnt);
		return;
	}
	for(int i=sum;i<=n;i++){
		le(k+1,i+1,(cnt&a[i]));
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	le(0,1,N);
	cout<<h;
	return 0;
} 