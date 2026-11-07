#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005],a1[200005],cnt[200005][35],flag[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		a1[i]=a[i];
	}
	sort(a+1,a+n+1);
	sort(a1+1,a1+n+1);
	for(int i=1;i<=n;++i){
		for(int j=30;j>=0;--j){
			if(pow(2,j)<=a1[i]){
				a1[i]-=pow(2,j);
				cnt[i][j]=1;
			}
		}
	}
	int sum=1073741823;
	for(int j=30;j>=0;j--){
		int p=0;
		for(int i=1;i<=n;++i){
			if(cnt[i][j]==1){
				p++;
				flag[i]=1;
			}
		}
		if(p>=m){
			int c1=0;
			for(int i=n;i>=1;--i){
				if(flag[i]==1){
					sum&=a[i];
					c1++;
				}
				if(c1==m){
					cout<<sum;
					return 0;
				}
			}
			break;
		}
		for(int i=1;i<=n;++i)flag[i]=0;
	}
	
	return 0;
}