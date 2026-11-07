#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+10;
int len,n;
ll cnt;
int l=1,r;
string s;
struct node{
	ll x;
	char y;
}a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>len;
	for(int i=1;i<=len;i++){
		scanf("%lld",&a[i].x);
		cin>>a[i].y;
	}
	r=len;
	while(l<r){
		ll minn=min(a[l].x,a[r].x);
		a[l].x-=minn;
		a[r].x-=minn;
		if(a[l].y!=a[r].y){
			cnt+=minn;
		}
		if(a[l].x==0){
			l++;
		}
		if(a[r].x==0){
			r--;
		}
	}
	cout<<cnt;
	/*
	cin>>len;
	for(int i=1;i<=len;i++){
		scanf("%d",&a[i].x);
		cin>>a[i].y;
		for(int j=1;j<=a[i].x;j++){
			s=s+a[i].y;
		}
	}
	r=s.size()-1;
	while(l<=r){
		if(s[l]!=s[r]){
			cnt++;
		}
		l++;
		r--;
	}
	cout<<cnt;
	*/
	return 0;
}