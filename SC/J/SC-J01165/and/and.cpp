#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M=200005;
int n,m;
int cnt_1[50];
int num[M][50];
bool tong[M];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		for(int j=0;j<=30;j++){
			num[i][j]=(x>>j)&1;
			if(num[i][j])cnt_1[j]++;
		}
	}
	int st=0;
	int ans=0;
	for(int j=30;j>=0;j--){
		if(cnt_1[j]>=m){
			st=j;
			for(int i=1;i<=n;i++){
				if(num[i][j])tong[i]=1;
			}
			break;
		}
	}
	ans+=(1<<(st));
	for(int j=st-1;j>=0;j--){
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(!tong[i])continue;
			if(num[i][j])cnt++;
		}
		if(cnt>=m){
			ans+=(1<<j);
			for(int i=1;i<=n;i++){
				if(!num[i][j])tong[i]=0;
			}
		}
	}
	cout<<ans;
	return 0;
}