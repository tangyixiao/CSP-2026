#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;

int n,m,ans;
int a[N];
bool cmp(int x,int y){
	return x>y;
}

signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	if(m==1){
		cout<<a[1];
		return 0;
	}
	ans=a[1];
	int tot=0;
	for (int i=2;i<=m+tot;i++){
		if(ans&a[i]==0){
			tot++;
			continue;
		}
		ans&=a[i];
	}
	cout<<ans;
	
	return 0;
} 
