#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[500005],flag[500005],v[500005];
int main(){
	/*freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);*/
	cin>>n>>m;
	int max1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		max1=max(max1,a[i]);
	}
	for(int i=1;i<=n;i++){
		if(a[i]>0){
			ans[a[i]]++;
			flag[a[i]]=1;
			v[a[i]]=i;
		}
		else{
			if(a[i] && flag[a[i]]){
				for(int j=v[a[i]];j<=i;j++){
					a[j]=0;
				}
			}	
		}
	}
	for(int i=1;i<=max1;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}