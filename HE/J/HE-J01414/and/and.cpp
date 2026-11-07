#include <bits/stdc++.h>
const int N=2e5+10;
using namespace std;
int n,m;
int a[N];
int ans;
bool b[N];
void dfs(int cnt,int sum){
	int lastsum=sum;
	for(int i=1;i<=n;i++){
		sum=lastsum;
		if(!b[i]){
			sum&=a[i];
			if(cnt==m){
				ans=max(ans,sum);
				continue;
			}
			else{
				b[i]=1;
				dfs(cnt+1,sum);
				b[i]=0;	
			}
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++)cin >> a[i];
	for(int i=1;i<=n;i++){
		b[i]=1;
		dfs(2,a[i]);
		b[i]=0;
	}
	cout << ans << endl;
	return 0;
}
