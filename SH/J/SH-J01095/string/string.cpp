#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 200005
ll n,l,r,cnt,B;
struct nud{
	char a;
	ll b;
} ls[N]; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>ls[i].b>>ls[i].a;
	}
	l=1;r=n;
	while(l<r){
		if(ls[l].b>ls[r].b){
			if(ls[l].a!=ls[r].a){
				cnt+=ls[r].b;
			}
			ls[l].b-=ls[r].b;
			r--;
		}
		if(ls[r].b>ls[l].b){
			if(ls[r].a!=ls[l].a){
				cnt+=ls[l].b;
			}
			ls[r].b-=ls[l].b;
			l++;
		}
		if(ls[l].b==ls[r].b){
			if(ls[l].a!=ls[r].a){
				cnt+=ls[l].b;
			}
			l++;r--;
		}
	}
	cout<<cnt<<"\n";
	return 0;
}
/*
2
3 a
2 a
*/ 
