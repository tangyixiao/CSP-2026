#include<bits/stdc++.h>
using namespace std;
const int N=200005;
int n;
int a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n;
	long long sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	long long ans=0;
	long long t=0;
	int li=1,ri=n;
	while(t<sum/2&&li!=ri){
//		cout<<t<<" "<<li<<" "<<ri<<"\n";
//		if(t+a[li]>sum/2){
//			if(c[li]!=c[ri])ans+=
//		}
		if(a[li]<a[ri]){
			if(c[li]!=c[ri]){
				ans+=a[li];
			}
			t+=a[li];
			a[ri]-=a[li];
			li++;
		}
		else if(a[li]==a[ri]){
			if(c[li]!=c[ri])ans+=a[li];
			t+=a[li];
			li++;
			ri--;
		}
		else {
			if(c[li]!=c[ri]){
				ans+=a[ri];
			}
			t+=a[ri];
			a[li]-=a[ri];
			ri--;
		}
	}
	cout<<ans;
	return 0;
} 