#include<iostream>
#include<algorithm>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
const int MAXN = 5e5+5;
int n,m;
int a[MAXN];
int crd[MAXN],mem[MAXN],f[MAXN];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	memset(crd,0,sizeof(crd));
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n <= 500){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				mem[j] = -1;
				f[j] = false;
			}
			for(int j=i;j<=n;j++){
				f[a[j]] = true;
				if(mem[a[j]] != -1){
					for(int k = mem[a[j]];k < j;k++){
						f[a[k]] = false;
						mem[a[k]] = -1;
					}
					
				}
				f[a[j]] = true;
				mem[a[j]] = j;
			}
			for(int j=1;j<=m;j++){
				if(f[j]) crd[j]++;
			}
			/*for(int i=1;i<=m;i++){
				if(i != 1)cout<<' ';
				cout<<crd[i];
			}
			cout<<endl;*/
		}
	}
	else{
		for(int i=1;i<=n;i++){
			crd[a[i]] = i;
			//cout<<a[i];
		}
	}
	crd[a[n]] = n;
	for(int i=1;i<=m;i++){
		if(i != 1)cout<<' ';
		cout<<crd[i];
	}
	return 0;
}