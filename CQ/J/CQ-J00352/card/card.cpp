#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[670000],vis[670000],ans[670000],cnt[670000];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cnt[a[i]]++;
		cin>>a[i];
	}
	if(m==1&&n>5000){
		cout<<n;
		return 0;
	}
	if(m==2&&n>5000){
		if(a[n]==1){
			cout<<n<<" "<<cnt[2];
		}
		else cout<<cnt[1]<<" "<<n;
		return 0;
	}
	stack<int>x;
	for(int i=1;i<=n;i++){
		//cout<<i<<endl;
		for(int j=1;j<=m;j++)vis[j]=0;
		for(int j=i;j<=n;j++){
			if(vis[a[j]]==0){
				x.push(a[j]);
				vis[a[j]]=1;
			}
			else{
				while(x.top()!=a[j]){
			//		cout<<x.top()<<" ";
					vis[x.top()]=0;
					x.pop();
				}
		//		cout<<"-";
		//		for(int j=i;j<=m;j++)cout<<vis[j]<<" ";
		//		cout<<endl;
			}
		}
	//	cout<<"hello"<<endl;
		int p=i+1,k=1;
		while(a[p]==a[i])p++,k++;
		i=p-1;
		while(x.size()!=0){
			ans[x.top()]+=k;
			x.pop();
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
} 
/*
19*4=76?
*/
