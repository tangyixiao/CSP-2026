#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,dp[N];
int da;
struct qq{
	int id,zhi;
};
qq a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].zhi ;
		a[i].id =1;
	}
	dp[1]=dp[2]=(a[1].zhi&a[2].zhi );
	a[1].id =a[2].id =2;
	for(int i=3;i<=n;i++){
		for(int j=1;j<i;j++){
			if(a[j].id == m){
				dp[i]=max(dp[i],(a[i].zhi &a[j].zhi) );
				a[i].id =a[j].id ;
			}else if(a[j].id<m){
				if((a[i].zhi &a[j].zhi)<=(a[i].zhi &dp[j]) &&(a[i].zhi &dp[j])>=dp[i]){
					a[i].id = a[j].id +1;
					dp[i]=max(dp[i],(a[i].zhi &dp[j]));
				}
				else if((a[i].zhi &a[j].zhi)>(a[i].zhi &dp[j])&&(a[i].zhi &a[j].zhi) >=dp[i]){
					a[i].id=2;
					dp[i]=max(dp[i],(a[i].zhi&a[j].zhi));
				}
			}
		}
	}
	int da;
	for(int i=1;i<=n;i++){
		if(a[i].id == m){
			da=max(dp[i],da);
		}
	}
	cout<<da;
	fclose(stdin);
	fclose(stdout);
	return 0;
}