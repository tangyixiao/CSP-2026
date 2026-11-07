#include<bits/stdc++.h>
using namespace std;
long long n,ans,a[200001];
char c[200001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long cnt1=1,cnt2=n,t1=0,t2=0;
	while(cnt1<cnt2){
		if(a[cnt1]-t1>a[cnt2]-t2){
			if(c[cnt1]!=c[cnt2]){
				ans+=(a[cnt2]-t2);
			}
			t1+=(a[cnt2]-t2);
			t2=0;
			cnt2--;
		}
		else if(a[cnt1]-t1==a[cnt2]-t2){
			if(c[cnt1]!=c[cnt2]){
				ans+=(a[cnt1]-t1);
			}
			cnt1++;
			cnt2--;
			t1=0,t2=0;
		}
		else{
			if(c[cnt1]!=c[cnt2]){
				ans+=(a[cnt1]-t1);
			}
			t2+=(a[cnt1]-t1);
			t1=0;
			cnt1++;
		}
	}
	cout<<ans;
	return 0;
}
