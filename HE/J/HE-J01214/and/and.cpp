#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010];
int ans(int x,int y){
	if(x==y){
		return x;
	}
	int x2[40],y2[40],numx=0,numy=0;
	memset(x2,0,sizeof(x2));
	memset(y2,0,sizeof(y2));
	while(x!=0){
		numx+=1;
		x2[numx]=x%2;
		x/=2;
	}
	while(y!=0){
		numy+=1;
		y2[numy]=y%2;
		y/=2;
	}
	long long cnt=0,num2=1;
	int len=max(numx,numy);
	for(int i=1;i<=len;i++){
		if(x2[i]==y2[i]){
			cnt+=num2;
		}
		num2=num2*2;
	}
	return cnt;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	long long k;
	for(int i=n-1;i>=n-m+1;i--){
		if(i==n-1){
			k=ans(a[i],a[i+1]);
		}else{
			k=ans(a[i],k);
		}
	}
	cout<<k;
	return 0;
}
