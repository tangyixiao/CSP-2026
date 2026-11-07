#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAN=2e5+10;
ll a[MAN];
char c[MAN];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n,len=0,ans=0;
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	ll cnt1=1,cnt2=n;
	ll step1=1,step2=len;
	while(step1<step2){
		if(c[cnt1]!=c[cnt2]){
			if(a[cnt1]>a[cnt2]){
				step2-=a[cnt2],step1+=a[cnt2],ans+=a[cnt2],a[cnt1]-=a[cnt2];
				cnt2--;
			}else if(a[cnt1]<a[cnt2]){
				step1+=a[cnt1],step2-=a[cnt1],ans+=a[cnt1],a[cnt2]-=a[cnt1];
				cnt1++;
			}else{
				ans+=a[cnt1],step1+=a[cnt1],step2-=a[cnt1];
				cnt1++,cnt2--;
			}
		}else{
			if(a[cnt1]>a[cnt2]){
				step1+=a[cnt2],step2-=a[cnt2],a[cnt1]-=a[cnt2];
				cnt2--;
			}else if(a[cnt1]<a[cnt2]){
				step1+=a[cnt1],step2-=a[cnt1],a[cnt2]-=a[cnt1];
				cnt1++;
			}else{
				step1+=a[cnt1],step2-=a[cnt1];
				cnt1++,cnt2--;
			}
		}
	}
	cout<<ans;
//3
//2 a
//2 b
//1 c
//1000000000 b
//1000000000 b
//1000000000 b


	return 0;
}
