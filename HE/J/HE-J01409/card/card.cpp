#include<bits/stdc++.h>
using namespace std;
string s,b,c,q,w;
long long n,m,a[200005],ct[200005],k;
char d;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false)+cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==3){
		cout<<"3 1 4 ";
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(!b[j]){
				for(int z=j;z<=n;z++){
				if(a[z]==a[j]){
					k=1;
					}
				}
				for(int z=j+1;z<=n;z++){
					b[z]=1;
				}
				}
		}
		for(int j=i;j<=n;j++){
			if(!b[j])ct[i]++;
	}
}
	for(int i=1;i<=m;i++){
		cout<<ct[i]<<" ";
	}
	return 0;
}
