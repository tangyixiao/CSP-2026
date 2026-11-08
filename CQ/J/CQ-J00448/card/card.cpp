#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
const int M=3e5+10;
int n,m;
int a[N];
int ans[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i) cin>>a[i];
	for(int i=1;i<=n;++i){
		int t[M]={};
		int w=i;
		for(int j=i;j<=n;++j){
			t[a[j]]++;
			if(t[a[j]]==2){
				bool f=0;
				for(int k=w;k<=j-1;++k){
					t[a[k]]=0;
					if(a[k]==a[j]){
						w=k+1;
						break;
					}
				}
				t[a[j]]=1;
			}
		}
		for(int j=1;j<=m;++j) ans[j]+=t[j];
//		cout<<"i:"<<i<<" w:"<<w<<endl;
//		cout<<"t:"<<endl;
//		for(int j=1;j<=m;++j) cout<<t[j]<<" ";
//		cout<<endl;
	}
	for(int i=1;i<=m;++i) cout<<ans[i]<<" ";
	return 0;
}

