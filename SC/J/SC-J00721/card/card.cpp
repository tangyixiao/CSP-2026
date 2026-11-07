#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int a[N*5],R[N*3],add[N*5];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,res=0;cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=n;i>=1;i--)
		if(!R[a[i]]) R[a[i]]=i;
	for(int i=1;i<=n;i++){
		add[i]++;
		if(R[a[i]]==i) add[i+1]+=add[i];
		else add[R[a[i]]]+=add[i];
	}for(int i=1;i<=m;i++) cout<<add[R[i]]<<' ';
	fclose(stdin);
	fclose(stdout);
	return 0;
}