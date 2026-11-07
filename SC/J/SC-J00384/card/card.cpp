#include<bits/stdc++.h>
using namespace std;
const int N=200010;
const int M=100010;
int n,m,a[N];
int ans[M],lastpos[M];
int L[N],R[N],segn; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	if(n<=5000){
		for(int i=1;i<=n;i++){
			cin>>a[i];
			lastpos[a[i]]=i;
		}
		for(int st=1;st<=n;st++){
			int p=st;
			while(p<=n){
				ans[a[p]]++;
				p=lastpos[a[p]]+1;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<' ';
		}
		cout<<'\n';
	}
	else{
		segn=0; a[0]=-1;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(a[i]!=a[i-1]){
				segn++; L[segn]=i; R[segn-1]=i-1;
			}
			lastpos[a[i]]=i;
		}
		R[segn]=n;
		for(int st=1,segnow=1;st<=n&&segnow<=segn;st=R[segnow]+1,segnow++){
			int p=st;
			while(p<=n){
				ans[a[p]]+=R[segnow]-L[segnow]+1;
				p=lastpos[a[p]]+1;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<' ';
		}
		cout<<'\n';
	}
    return 0;
}