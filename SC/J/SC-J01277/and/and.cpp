#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,a[200010],dp[200010][31],man=0;
ll ui=0,ans,cnt=0;
ll jin[31]= {1,2};
void jinzhi() {
	for(int i=2; i<=30; i++) {
		jin[i]=jin[i-1]*2;
	}
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie();
	cout.tie();
	jinzhi();
	cin>>n>>m;
	memset(dp,0,sizeof(dp));
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		for(int j=30; j>=0; j--) {
			if(!a[i])break;
			if(a[i]>=jin[j]) {
				a[i]-=jin[j];
				man=max(man,(ll)j);
				dp[i][j]=1;
			}
		}
	}
	/*for(int i=1; i<=n; i++) {
		for(int j=0; j<=30; j++) {
			cout<<dp[i][j]<<' ';
		}
		cout<<endl;
	}*/
	for(int i=30; i>=0; i--) {
		int op=0;
		for(int j=1; j<=n; j++) {
			if(ui>0) {
				if(dp[j][i+1]==2&&dp[j][i]==1) {
					op++;
					dp[j][i]=2;
				}
			} else {
				if(dp[j][i]==1) {
					op++;
				}
			}
		}
		if(op==m) {
			
		}
		if(op>=m) {
			cnt+=jin[i];
			ui++;
			if(ui==1) {
				for(int j=1; j<=n; j++) {
					if(dp[j][i]==1) {
						dp[j][i]=2;
					}
				}
			}
			//cout<<cnt<<endl;
		}
	}
	cout<<cnt;
	return 0;
}
