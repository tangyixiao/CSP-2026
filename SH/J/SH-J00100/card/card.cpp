#include<bits/stdc++.h> 
using namespace std;

int a[500005],ans[300005];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		bool vis[m+5]={false};
		int b[n+5]={0},cnt=1;
		for(int j=i;j<=n;j++){
			if(!vis[a[j]]){
				vis[a[j]]=true;
				b[cnt]=a[j];
				cnt++;
			}
			else{
				cnt--;
				for(;cnt>=1;cnt--){
					if(b[cnt]==a[j]){
						break;
					}
					else{
						vis[b[cnt]]=false;
						b[cnt]=0;
					}
				}
				cnt++;
			}
		}
		for(int i=1;i<cnt;i++){
			ans[b[i]]++;
			//cout<<b[i]<<" ";
		}
		//cout<<endl;
	}

	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}
