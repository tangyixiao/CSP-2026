#include<bits/stdc++.h>
using namespace std;
int a[200005],b[200005];
bool vis[200005];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	int ans=0;
	for(int i=30;i>=0;i--){
		int t=(1<<i),cnt=0;
		memset(vis,false,sizeof(vis));
		for(int j=1;j<=n;j++){
			if((a[j]&t)!=0){
				cnt++;vis[j]=true;
			}
		}
		//cout<<cnt<<' '<<t<<endl;
		if(cnt>m){
			ans|=t;
			for(int j=1;j<=n;j++)
				if(!vis[j])a[j]=0;
			sort(a+1,a+n+1,cmp);
			n=cnt;
		}
		else if(cnt==m){
			sort(a+1,a+n+1,cmp);
			int sum=2147483647;
			for(int i=1;i<=m;i++)sum&=a[i];
			ans|=sum;
			//for(int i=1;i<=n;i++)cout<<a[i]<<' ';
			cout<<ans;
			return 0;
		}
		for(int j=1;j<=n;j++)
			a[j]&=(1<<i)-1; 
	}cout<<"P";
	int sum=2147483647;
	for(int i=1;i<=m;i++)sum&=a[i];
	ans|=sum;cout<<ans;
	//RP++ pls
	return 0;
}