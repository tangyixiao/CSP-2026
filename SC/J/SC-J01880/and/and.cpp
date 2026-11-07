#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N],pw[35];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	pw[0]=1;
	for(int i=1;i<=30;i++) pw[i]=pw[i-1]*2;
	int now=pw[30],t=30;
	while(1){
		int ans=0;
		for(int i=1;i<=n;i++){
			if((a[i]&now)==now) ans++;
		}
		if(t==0){
			if(ans<m) now--;
			break; 
		}
		if(ans>=m) now+=pw[--t];
		else now-=pw[--t];
	}
	cout<<now;
	return 0;
} 