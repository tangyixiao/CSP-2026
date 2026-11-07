#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
const int M=3e5+5;
int a[N],lst[M],v[M];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int cyc=n+1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		v[a[i]]+=i;
		if(lst[a[i]]==0) lst[a[i]]=i;
		else{
			for(int j=i+1;j<=min(cyc,lst[a[i]]);j++){
				v[a[j]]-=i;
			}
			cyc=i;
			lst[a[i]]=i;
		}
		
	}
	for(int i=1;i<=m;i++){
		cout<<v[i]<<" ";
	}
} 
