#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int a[N];
int n,m;
int ans[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		map<int,int>mp;//first-数字，second-第一个数字的编号
		for(int j=i;j<=n;j++){
			if(mp[a[j]]==0){
				mp[a[j]]=j;
			}
			else{
				int paid=mp[a[j]];
				for(int x=paid;x<j;x++){
					mp[a[x]]=0;
				}
				mp[a[j]]=j;
			}
		}
		for(int j=1;j<=m;j++){
			if(mp[j]!=0)ans[j]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}