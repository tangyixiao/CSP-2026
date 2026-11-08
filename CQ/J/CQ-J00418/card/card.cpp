#include<bits/stdc++.h>
#define ll long long
#define pr pair<int,int>
#define _1 first
#define _2 second
using namespace std;
const int N=5e5+5;
const int M=3e5+5;
int n,m;
int a[N];
int cnt[M];
int dn[M];
bool f=1;
stack<int> q;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); 
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>a[i-1]){
			f=0;
		}
	}
	if(f){
		for(int i=1;i<=n;i++){
			dn[a[i]]++;
		}
		for(int i=1;i<=n;i++){
			cout<<dn[i]<<' ';
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			cnt[a[j]]++;
			q.push(a[j]);
			if(cnt[a[j]]==2){
				q.pop();
				while(q.top()!=a[j]){
					cnt[q.top()]--;
					q.pop();
				}
				cnt[a[j]]--;
			} 
		}
		while(!q.empty()){
			dn[q.top()]++;
			cnt[q.top()]=0;
			q.pop();
		}
	} 
	for(int i=1;i<=m;i++){
		cout<<dn[i]<<' ';
	}
	return 0;
} 
/*
*/
