//card
#include<bits/stdc++.h>
using namespace std;

int a[100000];
int dp[1000000];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++) cin>>a[i];
	if(n==1){
		cout<<a[m-1]+a[m-2];
		return 0;
	}
	int l=m/2;
	for(int i=0;i<m;i++) dp[a[i]]++;
	if(n==2){
		int num=0;
		for(int i=1;i<m;i++) num+=dp[i];
	}
	return 0;
}