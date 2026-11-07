#include<bits/stdc++.h>
using namespace std;
int a[500010],c[310],last[310];
bool book[510],booke[310];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=500){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				last[j]=0;booke[j]=0;
			}
			for(int j=1;j<=n;j++){
				book[j]=0;
			}
			for(int j=i;j<=n;j++){
				if(last[a[j]]){
					if(!book[last[a[j]]]){
						for(int k=last[a[j]];k<j;k++){
							book[k]=1;
						}
					}
				}
				last[a[j]]=j;
			}
			for(int j=i;j<=n;j++){
				if(!book[j]) booke[a[j]]=1;
			}
			for(int j=1;j<=m;j++){
				if(booke[j]) c[j]++;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<c[i]<<" ";
		}
	}
	else{
		for(int i=1;i<=m;i++){
			cout<<n<<" ";
		}
	}
	return 0;
}
