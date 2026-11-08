#include<bits/stdc++.h>
using namespace std;
int dp[2020050];
int a[2020050];
bool c(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	//提交时记得删掉注释哦！！！ freopen别漏 文件名看看写没写对！！！
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	int cnt=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,c);
	int lmy=a[1];
	if(m==2){
		lmy&=a[2];
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				lmy=max(lmy,a[i]&a[j]);
			}
		}
		cout<<lmy;
		return 0;
	}
	if(m==3){
		lmy&=a[2];
		lmy&=a[3];
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					lmy=max(lmy,a[i]&a[j]&a[k]);
				}
				
			}
		}
		cout<<lmy;
		return 0;
	}
	if(m==4){
		lmy&=a[2];
		lmy&=a[3];
		lmy&=a[4];
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						lmy=max(lmy,a[i]&a[j]&a[k]&a[l]);
					}
				}
				
			}
		}
		cout<<lmy;
		return 0;
	}
	for(int i=1;i<=m;i++){
		lmy&=a[i];
		//cout<<a[i]<<' ';
	}
	cout<<lmy;
	return 0;
}

