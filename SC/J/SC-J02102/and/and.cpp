#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxn=2e5+5;
int a[maxn];
bool vis[maxn];
int n,m,cnt=-0x3f3f3f3f;
int main(){
	freopen("ans.in","r",stdin);//打开输入文件
	freopen("and.out","w",stdout);//打开输出文件
	
	ios::sync_with_stdio(0);//快读快写
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	if(m==n){
		cnt=a[1];
		for(int i=1;i<=n;i++){
			cnt=cnt&a[i];
		}
		cout<<cnt;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			cnt=max(cnt,a[i]&a[j]);
		}
	}
	cout<<cnt;
	return 0;
}