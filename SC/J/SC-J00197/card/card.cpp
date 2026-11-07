#include<bits/stdc++.h>
//#define int long long
using namespace std;
const int N=5e5+10;
int a[N],table[N],cd,ans[N],ansl;
bool check(int k,int l2){
	for(int i=1;i<=l2;i++){
		if(table[i]==k){
			return false;
		}
	}
	return true;
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.our","w",stdout);
	int n,m,T,ml=1;
	cin>>n>>m;T=n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(table,0,sizeof(table));
		int l1=i,l2=1;//牌堆和桌子的牌的序列 
		cd=n-i+1;
		while(cd!=0){
//			cout<<l1<<" "<<l2<<"\n";
			int k=a[l1++];
//			cout<<k<<"\n";
			if(check(k,l2)==true){
				table[l2++]=k;
			}
			else{
//				cout<<"ok\n";
				int firstk=1e9;
				for(int j=1;j<=l2;j++){
					if(table[j]==k){
						firstk=min(firstk,j);
						table[j]==0;
					}
				}
//				cout<<firstk<<"\n";
				for(int j=firstk;j<=l2;j++){
					table[j]=0;
				}
//				for(int j=1;j<=l2;j++) cout<<table[j]<<" ";
//				cout<<"\n";
				table[l2++]=k;
			}
			cd--;
//			for(int j=1;j<=l2;j++){
//				cout<<table[j]<<" ";
//			}
//			cout<<"\n";
		}
//		cout<<"\n";
		int cnt=0;
		for(int j=1;j<=l2;j++){
			if(table[j]!=0) ans[table[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/ 