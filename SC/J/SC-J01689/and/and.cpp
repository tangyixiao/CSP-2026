#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
int n,m;
int a[MAXN];
vector<int>g[32];
int cnt_y[32];
bool b[MAXN][32];
int color[MAXN];
void f(int x,int y){
	int tempcnt=30;
	while(x){
		if(x>=(1<<tempcnt)){
			b[y][tempcnt]=true;
			cnt_y[tempcnt]++;
			g[tempcnt].push_back(y);
			x-=(1<<tempcnt);
		}
		tempcnt--;
	}
}
int find(){
	for(int i=30;i>=0;i--){
		if(cnt_y[i]>=m){
			return i;
		}
	}
	return -1;
}
signed main(void){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		f(a[i],i);
	}
	int colorcnt=0;
	int ans=0;
	int findend=find();
	ans+=(1<<findend);
	int cnt;
	for(int i=findend-1;i>=0;i--){
		cnt=0;
		colorcnt++;
		for(int j=1;j<=n;j++){
			if(color[j]==colorcnt-1&&
			b[j][i]==true){
				cnt++;
				color[j]=colorcnt;
			}
		}
		if(cnt>=m){
			ans+=(1<<i);
		}
	}
	cout<<ans;
	return 0;
}
