#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200010];
char c[200010];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		//cnt2+=a[i];
	}
	int cnt=0;
	//int cnt1=0;
	for(int i=1,j=n;;){
		//cout<<i<<" "<<j<<" "<<c[i]<<" "<<c[j]<<" "<<cnt1<<" "<<cnt<<endl;
		int d=min(a[i],a[j]);
		if(c[i]!=c[j]){
			cnt+=d;
		}
		//cnt1+=d;
		a[i]-=d;
		a[j]-=d;
		if(a[i]<=0)i++;
		if(a[j]<=0)j--;
		if(i==j)break;
	}
	cout<<cnt;
	return 0;
}
