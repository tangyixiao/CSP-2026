#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int b[200005][35];
int to[35];
bool iu[20005];
int ans=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	memset(iu,1,sizeof(iu));
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		int temp=a[i];
		int cnt=1;
		while(temp){
			b[i][cnt]=temp%2;
			to[cnt]+=b[i][cnt];
			temp/=2;
			cnt++;
		}
	}
	for(int i=32;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(b[j][i]==1&&iu[j]==1)cnt++;
		}
		if(cnt>=m)for(int j=1;j<=n;j++)if(b[j][i]==0)iu[j]=0;
		if(cnt>=m){
			int temp=1;
			for(int k=1;k<i;k++)temp=temp*2;
			ans+=temp;
		}
	}
	cout<<ans;
    return 0;
}