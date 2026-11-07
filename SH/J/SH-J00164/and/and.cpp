#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
const int MAXN=200005;
int n,m,a[MAXN],x,ans;
bool f[MAXN];
int lg(int n){
	int f=1,cnt=0;
	while(f<=n){
		f*=2;
		cnt++;
	}return cnt;
}bool cmp(int a,int b){
	return a%(int)pow(2,x)>b%(int)pow(2,x);
}int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin>>n>>m;
	int mxlg=0;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		mxlg=max(mxlg,lg(a[i]));
	}x=mxlg;
	while(x>0){
		sort(a+1,a+n+1,cmp);
		int ad=a[1];
		for(int i=2;i<=m;i++) ad=(ad&a[i]);
		ans=max(ans,ad);
		x--;
	}cout<<ans;
	return 0;
}
