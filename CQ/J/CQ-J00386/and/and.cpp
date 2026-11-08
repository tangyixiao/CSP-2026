#include<bits/stdc++.h>
using namespace std;
int n,m;
int sum[32];
bool b[200005][32];
long long ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		int s=30;
		while(x){
			sum[s]+=x%2;
			b[i][s]=x%2;
			x/=2;
			s--;
		}
	}
	for(int i=1;i<=30;i++){
		if(sum[i]>=m){
			ans+=pow(2,30-i);
			for(int j=1;j<=n;j++){
				if(b[j][i]==0){
					for(int l=1;l<=30;l++){
						if(b[j][l]==1) sum[l]--;
						b[j][l]=0;
					}
				}
			}
		}
	}
	cout<<ans;
	return 0;
}

