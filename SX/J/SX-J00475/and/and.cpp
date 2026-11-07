#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,m,a[N],ans;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	int n1=n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int cnt=0,num=a[n];
	while(num){
		num/=2;
		cnt++;
	}
	int top=1;
	for(int i=cnt-1;i>=0;i--){//二进制第i位
		int x=pow(2,i);
		cnt=0;
		for(int j=top;j<=n;j++){
			int t=a[j]/x;
			t%=2;
			if(t==1)cnt++;
		}
		if(cnt>=m){
			for(int j=top;j<=n;j++){
				int t=a[j]/x;
				t%=2;
				if(t==0)a[j]=0;
			}
			sort(a+top,a+n+1);
			top+=n1-cnt;
			n1=n-top+1;
			ans+=x;
		}
	}
	cout<<ans;
	return 0;
}