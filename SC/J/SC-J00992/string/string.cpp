#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	LL n;
	cin>>n;
	vector<LL> a(n+3,0);
	vector<char> c(n+3);
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	char now1=c[1],now2=c[n];
	LL i1=1,i2=n;
	LL ans=0;
	while(i1<i2){
		if(now1==now2){
			if(a[i1]==a[i2]){
				i1++;
				now1=c[i1];
				i2--;
				now2=c[i2];
			}
			if(a[i1]<a[i2]){
				a[i2]-=a[i1];
				i1++;
				now1=c[i1];
			}
			if(a[i1]>a[i2]){
				a[i1]-=a[i2];
				i2--;
				now2=c[i2];
			}
			continue;
		}
		if(now1!=now2){
			if(a[i1]==a[i2]){
				ans+=a[i1];
				i1++;
				now1=c[i1];
				i2--;
				now2=c[i2];
			}
			if(a[i1]<a[i2]){
				ans+=a[i1];
				a[i2]-=a[i1];
				i1++;
				now1=c[i1];
			}
			if(a[i1]>a[i2]){
				ans+=a[i2];
				a[i1]-=a[i2];
				i2--;
				now2=c[i2];
			}
		}
	}
	cout<<ans;
	return 0;
} 