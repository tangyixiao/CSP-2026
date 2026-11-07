#include<bits/stdc++.h>
using namespace std;

const int N=5e5+7;
int n,m,val[N],num[N];
int last[N];
bool vis[N];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>val[i];
	}
	if(n<=1000){
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				if(last[val[j]]==0){
					last[val[j]]=j;
					continue;	
				}
				for(int k=last[val[j]]+1;k<=j;k++){
					last[val[k]]=0;
				}
				last[val[j]]=j;
			}
			for(int j=1;j<=n;j++){
				if(last[val[j]])num[val[j]]++;
				last[val[j]]=0;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<num[i]<<" ";
		}
	}else{
		for(int i=1;i<=n;i++){
			num[val[i]]=i;
		}
		
		for(int i=1;i<=m;i++){
			cout<<num[i]<<" ";
		}
	}
}