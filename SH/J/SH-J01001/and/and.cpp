#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],highest,ans;
bool b[200005][35];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1,cmp);
	int l=32,cnt=0,akcspj=a[1];
	while(akcspj){
		b[1][l]=akcspj%2;
		akcspj>>=1;
		l--;
	}highest=l+1;
	for(int i=2;i<=n;i++){
		l=32,akcspj=a[i];
		while(akcspj){
			b[i][l]=akcspj%2;
			akcspj>>=1;
			l--;
		}
	}
	/*
	for(int i=1;i<=n;i++){
		for(int j=1;j<=32;j++){
			cout<<b[i][j];
		}cout<<'\n';
	}
	*/
	for(int i=highest;i<=32;i++){
		cnt=0;
		for(int j=1;j<=n;j++){
			if(cnt==m){
				for(int k=1;k<=j;k++){
					if(b[k][i]){
						if(ans==0)ans=a[k];
						else ans=(ans & a[k]);
					}
				}cout<<ans;
				return 0;
			}
			if(b[j][i]==1)cnt++;
		}
	}cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
