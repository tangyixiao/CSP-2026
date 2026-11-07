#include<bits/stdc++.h>
using namespace std;
const int KS=5e5+10;
int a[KS],n,m;
int cha[KS],nxt[KS];
map<int,int> ma,mb;
void work(int be){
	for(int i=be;i<=n;i++){
		if(nxt[i]!=0){
			cha[i+1]--;
			cha[nxt[i]]++;
			i=nxt[i]-1;
		}
	}
	return;
} 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(ma[a[i]]==0){
			ma[a[i]]=i;
		}else{
			nxt[ma[a[i]]]=i;
			ma[a[i]]=i;
		}
	}
	for(int i=1;i<=n;i++){
		work(i);
	}
	for(int i=1;i<=n;i++){
		cha[i]=cha[i-1]-cha[i];
		mb[a[i]]=max(mb[a[i]],i-cha[i]);
	}
	for(int i=1;i<=m;i++){
		cout<<mb[i]<<" ";
	}
	cout<<"\n";
	return 0;
} 
