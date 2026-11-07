#include<bits/stdc++.h>
using namespace std;
int n,m,z;
int l[500000];
int a[500000];
int ans[300000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>l[i];
	}
	for(int i=0;i<n;i++){
		z=0;
		int cnt[300000];
		for(int j=0;j<300000;j++){
			cnt[j]=-1;
		}
		for(int j=i;j<n;j++){
			a[z]=l[j];	
			if(cnt[l[j]-1]!=-1){
				z=cnt[l[j]-1];
			}
			cnt[l[j]-1]=z;
		    z++;
			
		}
		for(int j=0;j<z;j++){
			ans[a[j]-1]++;
		}	
	}
	for(int j=0;j<m;j++){
		cout<<ans[j]<<" ";
	}
	return 0;
}