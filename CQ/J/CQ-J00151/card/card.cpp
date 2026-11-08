#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int a[N],ans[M];
int st[N],tt=0-1;
bool inst[M];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(inst[a[j]]){
				while(st[tt]!=a[j]){
					inst[st[tt]]=false;
					tt--;
				}
			}else{
				inst[a[j]]=true;
				st[++tt]=a[j];
			}
		}
		while(~tt){
			ans[st[tt]]++;
			inst[st[tt]]=false;
			tt--;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}
/*
from:  PC_cats

Oh no it's too hard......

Good bye......

2026/10/31 11:45
*/
