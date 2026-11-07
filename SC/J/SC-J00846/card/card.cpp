#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	int ans[m];
	for(int i=0;i<=m;++i) ans[i]=0;
	vector<int> a(n+1);
	for(int i=1;i<=n;++i)
		cin>>a[i];
	for(int i=1;i<=n;++i){
		vector<int> card(n+1);
		int t=1;
		for(int j=i;j<=n;++j){
			card[t]=a[j];
//			cout<<card[t]<<" ";
			++t;
		}
//		cout<<" ";
		vector<int> desk(m+1);
		int temp=1;
		for(int j=1;j<=n-i+1;++j){
			desk[temp]=card[j];++temp;
			for(int k=1;k<temp-1;++k){
				if(desk[k]==card[j]){
					for(int z=k;z<temp-1;++z) desk[z]=-1;
				}
			}
			card[j]=-1;
		}
		for(int j=1;j<temp;++j){
//			cout<<desk[j]<<" "; 
			if(desk[j]!=-1){
				ans[desk[j]]++;
			}
		}
//		cout<<endl;
	}
	for(int i=1;i<=m;++i) cout<<ans[i]<<" ";
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1

*/
