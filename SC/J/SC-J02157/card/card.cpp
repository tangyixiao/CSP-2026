#include<bits/stdc++.h>
using namespace std;
const int M=3e5+10;
const int N=5e5+10;
int b[M];
int a[N],t[N];
void del(int l,int r,int a[],int sz){
	int len=r-l+1;
	for(int i=l;i<=sz-len;i++){
		a[i]=a[i+len];
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int id=1;
		memset(t,0,sizeof t);
		for(int j=i;j<=n;j++){
			t[id]=a[j];
			if(id>1){
			bool f=0;int p;
			for(int k=1;k<id;k++){
				if(t[k]==t[id]){
					f=1;
					p=k;
					break;
				}
			}
			if(f){
			int e=id-1;
			del(p,e,t,id);
			id-=(e-p+1);
			}
		}
//			for(int j=1;j<=id;j++)cout<<t[j]<<" ";cout<<"\n";
			id++;
		}
//		cout<<"\n\n";
		id--;
		for(int i=1;i<=id;i++)b[t[i]]++;
	}
	for(int i=1;i<=m;i++)cout<<b[i]<<" ";
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/