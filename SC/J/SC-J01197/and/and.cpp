#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,b[N];
bool f=1,t=1;
long long a[N],ans;
void solve2(){
	long long sum;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			sum=a[i]&a[j];
			ans=max(ans,sum);
		}
	}
	cout<<ans;
}
void solvesmall(){
	for(int i=1;i<=m;i++){
		b[i]=i;
	}
	while(b[1]<n-m+1){
		long long sum=a[b[1]];
		for(int i=1;i<=m;i++){
			sum&=a[b[i]];
		}
		ans=max(ans,sum);
		b[m]++;
		for(int i=m;i>=1;i--){
			if(b[i]>n){
				b[i-1]++;
				int k=i;
				while(k<=m){
					b[k]=b[k-1]+1;
					k++;
				}
			}
		}
	}
	cout<<ans;
}
bool cs(int x){
	x=x+1;
	while(x!=1){
		x=x/2;
		if(x%2!=0&&x!=1){
			return false;
		}
	}
	return true;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(!cs(n)){
		t=0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(!cs(a[i])){
			f=0;
		}
		if(a[i]!=i-1){
			t=0;
		}
	}
	sort(a+1,a+n+1,greater<long long>());
	if(m==1){
		cout<<a[1];
		return 0;
	}
	if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		solve2();
		return 0;
	}
	if(n<=20){
		solvesmall();
		return 0;
	}
	if(f==1){
		cout<<a[m];
		return 0;
	}
	if(t==1){
		ans=a[1];
		for(int i=1;i<=m;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	} 
}