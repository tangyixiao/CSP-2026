#include<bits/stdc++.h>
using namespace std;
//第3题的对拍 
int n,m;
int opt=1;
bool flag=0;
long long ans=0;
long long a[300000]; 
bool vi[300002];
bool cmp(long long x,long long y){
	return x>y;
}
void dfs(long long x,int sum){
	if(sum==m){
	ans=max(ans,x);
	return;	
	}
	for(int i=1;n>=i;i++){
		if(!vi[i]){
			vi[i]=1;
			dfs(x&a[i],sum+1);
			vi[i]=0;
		}
	}
}
bool check(long long k){//是否为2的n次方数 
	if(k==0)return 0;
	while(k>1){
		if(k%2!=0)return 0;
		k/=2;
	}
	return 1;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(check(n))flag=1;
	for(int i=1;n>=i;i++){
		cin>>a[i];
		if(a[i]>3 && !check(a[i]+1))opt=0;
		if(a[i]!=i-1)flag=0;
	}
	if(opt==1){
		sort(a+1,a+1+n,cmp);
		cout<<a[m];
		return 0;
	}
	else if(m==n){
		ans=a[1];
		for(int i=2;n>=i;i++)ans=ans&a[i];
	}
	else if(flag==1){
		sort(a+1,a+1+n,cmp);
		ans=a[1];
		for(int i=2;m>=i;i++)ans=ans&a[i];
	}
	else {
	for(int i=1;n>=i;i++){
	vi[i]=1;
	dfs(a[i],1);
	vi[i]=0;	
	}
	}
	
	cout<<ans;
	return 0;

}
