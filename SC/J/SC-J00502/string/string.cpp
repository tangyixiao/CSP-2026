#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct node{
	ll x;
	string s;
} a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].s;
	}
	int l=1,r=n;
	ll cnt=0;
	while(l<r){
		if(a[l].x>=a[r].x){
			if(a[l].s!=a[r].s){
				cnt+=a[r].x;
			}
			a[l].x-=a[r].x;
			r--;
		}else if(a[l].x<a[r].x){
			if(a[l].s!=a[r].s){
				cnt+=a[l].x;
			}
			a[r].x-=a[l].x;
			l++;
		}
	}
	cout<<cnt;	
	
	return 0;
}