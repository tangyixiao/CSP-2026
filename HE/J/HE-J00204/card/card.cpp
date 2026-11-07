#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int a[500000],n,m,shu[500000],o;
bool f[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i-1;j<n;j++){
			if(f[a[j]]==true){
				o=i-1;
				while(a[o]!=a[j]){
					
				}
			}
			else{
				f[a[j]]=true;
			}
		}
	}
	return 0;
}
