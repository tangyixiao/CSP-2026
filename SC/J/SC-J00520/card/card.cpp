#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e5+5,M=3e5+5;
int n,m,a[N];
int last[M],cnt,mi[M],tou[M];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){//may:清空数组？ 
		memset(last,0,sizeof(last));
		memset(mi,0,sizeof(mi));
		for(int j=i;j<=n;j++){
			cnt++;
			mi[a[j]]++;
			if(last[a[j]]==0){
				last[a[j]]=j;
			}else{
				cnt-=j-last[a[j]];
			//	cout<<j<<endl;
				for(int k=j-1;k>=last[a[j]];k--){
				//	cout<<a[k]<<"*";
					if(a[j]!=a[k]) last[a[k]]=0;
					if(mi[a[k]]) mi[a[k]]--;
				//	cout<<mi[a[k]]<<"^"<<endl;
				}
				last[a[j]]=j;
			}
			//cout<<endl;
		}
		for(int j=1;j<=m;j++){
			if(mi[j]>0){
				tou[j]++;
			//	cout<<j<<"&";
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<tou[i]<<" ";
	}
	
	return 0; 
} 
//24
/*
10 3
3 1 2 1 3 2 3 1 2 1
1
0
4 3
1 2 1 3


*/