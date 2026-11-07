#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,a[200005],m;
void solve1(){
	int maxx=0;
	for(int i=1;i<=n;i++){
		maxx=max(maxx,a[i]);
	}
	cout<<maxx;
}
void solve2(){
	int maxx=0;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			int x=a[i],y=a[j];
			string c1="",c2="";
			while(x>0){
				c1+=('0'+x%2);
				x/=2;
			}
			while(y>0){
				c2+=('0'+y%2);
				y/=2;
			}
			int sum=0;
			int base=1;
			for(int k=0;k<min(c1.size(),c2.size());k++){
				if(c1[k]=='1'&&c2[k]=='1') sum+=base;
				base*=2;
			}
			maxx=max(maxx,sum);
		}
	}
	cout<<maxx;
}
void solven(){
	string c1="";
	while(a[1]>0){
		c1+=('0'+a[1]%2);
		a[1]/=2;
	}
	for(int i=2;i<=n;i++){
		string c2="";
		while(a[i]>0){
			c2+=('0'+a[i]%2);
			a[i]/=2;
		}
		int sum=0;
		int base=1;
		for(int k=0;k<min(c1.size(),c2.size());k++){
			if(c1[k]=='1'&&c2[k]=='1') sum+=base;
			base*=2;
		}
		if(i==n){
			cout<<sum;
			return;
		}
		c1="";
		while(sum>0){
			c1+=('0'+sum%2);
			sum/=2;
		}
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1) solve1();
	else if(m==2) solve2();
	else if(m==n) solven();
	else{
		sort(a+1,a+n+1);
		cout<<a[m];
	}
}
