#include<bits/stdc++.h>
using namespace std;
struct node{
	char z;
	int s;
};
int n;
int l,r;
long long ans;
vector<node>a;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	a.resize(n);
	for(int i=0;i<n;i++){
		cin>>a[i].s>>a[i].z;
		r+=a[i].s;
	}
	r=n-1;
	while(l!=r){
		long long wei=min(a[l].s,a[r].s);
		a[l].s-=wei;
		a[r].s-=wei;
		if(a[l].z!=a[r].z){
			ans+=wei;
//			cout<<l<<'-'<<r<<endl;
		}
		if(a[l].s==0){
			l++;
		}else{
			r--;
		}
	}
	cout<<ans;
	return 0;
}
