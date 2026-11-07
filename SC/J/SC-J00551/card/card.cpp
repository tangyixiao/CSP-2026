#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[500005],sum[300005];
long long cards[500005],l;
void dfs(long long sta){
	l=0;
	for(int i=1;i<=n;i++){
		cards[i]=0;
	}
	for(int i=sta;i<=n;i++){
		for(int j=1;j<=l;j++){
			if(cards[j]==a[i]){
				l=j-1;
				break;
			} 
		}
		cards[++l]=a[i];
	}
	for(int i=1;i<=l;i++){
		sum[cards[i]]++;
	}
	return ;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(long long i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=n;i++){
		dfs(i);
	}
	for(int i=1;i<=m;i++){
		cout << sum[i] << ' ';
	}
	return 0;
}