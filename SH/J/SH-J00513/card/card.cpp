#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); 
	int n,m,a[200005]={0};
	map<int,int>mp;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	for(int i=1;i<=n;i++){
		vector<int>v(n);
		int r=0;
		for(int j=i;j<=n;j++){
			if(r==0){
				v[r]=a[j];
				r++;
				continue;
			}else{
				for(int q=0;q<r;q++){
					if(a[j]==v[q]){
						r=q;
						break;
					}
				}
			}
			v[r]=a[j];
			r++;
		}
		for(int j=0;j<r;j++){
			mp[v[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<mp[i]<<" ";
	}
	return 0;
}
