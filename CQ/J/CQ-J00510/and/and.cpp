#include<bits/stdc++.h>
using namespace std;
int n,m,l,z,sat;
long long ans=0,v;
vector<long long> a;
int sum(long long x){
	int s=0;
	while(x){
		s++;
		x&=(x-1);
	}
	return s;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	//按位与有0只减少，每次选与后最大的  
	cin>>n>>m;
	a.resize(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(sum(a[i])>z){
			z=sum(a[i]);
			ans=a[i];
			l=i;
		}
	}
	a[l]=0;
	m--;
	while(m--){
		sat=-1;
		v=-1;
		for(int i=0;i<n;i++){
			if((ans&a[i])>v){
				v=ans&a[i];
				sat=i;
			}
		}
		ans=v;
		a[sat]=0;
	}
	cout<<ans;
	return 0;
}
