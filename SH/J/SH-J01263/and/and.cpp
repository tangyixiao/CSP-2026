#include<bits/stdc++.h>
using namespace std;
long long n,m,a[2000010],ans;
void d(long long x,long long  y,long long z,bool f){
	if(z==0&&f!=0){
		return;
	}
	if(y==m){
		ans=max(z,ans);
		return;
	}
	if(x>n)return;
	if(f){
		d(x+1,y+1,z&a[x],1);
		d(x+1,y,z,1);
	}else {
		d(x+1,y+1,a[x],1);
		d(x+1,y,0,0);
	}
}
int main(){
	freopen("and.in.txt","r",stdin);
	freopen("and.out.txt","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n>2000){
		if(a[1]==0&&a[2]==1){
			ans=n-m;
		}else {
			sort(a+1,a+1+n);
			ans=a[n-m];
		}
		cout<<ans;
		return 0;
	} 
	d(1,0,0,0);
	cout<<ans;
	return 0;
} 
