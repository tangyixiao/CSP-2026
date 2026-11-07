#include<bits/stdc++.h>
#include<stdio.h>
#include<cstdio>
using namespace std;
const int M=5e5+5;
int n,m,a[M],ans[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	for(int i=1;i<=n;i++){
		int now=i;
		while(now<=n){
			for(int j=n;j>=now;j--){
				if(a[now]==a[j]&&now<=n){
					ans[a[now]]++;
					now=j+1;
					break;
				}
			} 
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
} 
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/