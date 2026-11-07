#include<bits/stdc++.h>
using namespace std;
int n,m;
int res[500005];
int ans[500005];
int a[500005];
bool vis1[500005],vis2[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		res[i]=a[i];
	}
	for(int i=0;i<n;i++){
		int cnt=0;
		if(res[i]==1){
			for(int k=i;k<n;k++){
				vis1[k]=true;
				cnt++;
			}
		}
		if(cnt==n){
			vis1[0]=0;
		}
		res[i]=1;
	}
	
	for(int i=1;i<n;i++){
		int cnt=0;
		if(res[i]==2&&vis1[i]==0){
			for(int k=i;k<n;k++){
				vis2[k]=true;
				cnt++;
			}
		}
		if(cnt==n){
			vis2[0]=0;
		}
		res[i]=2;
	}
	for(int i=0;i<n;i++){
		if(vis2[i]==0){
			ans[res[i]]++;
		}
	}

	for(int i=0;i<n;i++){
		int cnt=0;
		if(res[i]==2){
			for(int k=i;k<n;k++){
				vis2[k]=true;
				cnt++;
			}
		}
		if(cnt==n){
			vis1[0]=0;
		}
		res[i]=1;
	}
	
	for(int i=1;i<n;i++){
		int cnt=0;
		if(res[i]==2&&vis2[i]==0){
			for(int k=i;k<n;k++){
				vis1[k]=true;
				cnt++;
			}
		}
		if(cnt==n){
			vis2[0]=0;
		}
		res[i]=2;
	}
	for(int i=0;i<n;i++){
		if(vis2[i]==0){
			ans[res[i]]++;
		}
	}
	cout<<ans[1]<<" "<<ans[2];
	return 0;
}
