#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
int n,m,a[N],b[N];
map<int,int>mp;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){ 
		int cnt=0;
		for(int j=i;j<=n;j++){ 
			b[++cnt]=a[j];
			for(int k=1;k<cnt;k++){ 
				if(b[k]==b[cnt]){
					cnt=k;
					break;
				}
			}
		}
		for(int i=1;i<=cnt;i++)mp[b[i]]++;
	}
	for(auto x:mp)cout<<x.second<<" ";
	return 0;
}
