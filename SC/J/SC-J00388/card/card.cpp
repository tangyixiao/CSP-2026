#include<bits/stdc++.h>
#include<cstdio>
#include<stdio.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m;
int a[N],used[M],b[M];
int inch[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(inch,-1,sizeof(inch));
		int where=1;
		for(int j=i;j<=n;j++){
			if(inch[a[j]]!=-1){
				int c=inch[a[j]];
				for(int k=inch[a[j]]+1;k<=where;k++){
					inch[b[k]]=-1;
				}
				inch[a[j]]=c;
				where=inch[a[j]]+1;
			}
			else{
				b[where]=a[j];
				inch[a[j]]=where;
				where++;
			}
		}
		for(int j=1;j<=m;j++){
			if(inch[j]!=-1){
				used[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<used[i]<<' ';
	}
	return 0;
}