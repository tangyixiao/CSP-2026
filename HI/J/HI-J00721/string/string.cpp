#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
ll cnt=0;
ll ans=0;
struct Ab{
	ll cnnt;
	char co;
};
Ab a[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int l;
		cin>>l;
		ans++;
		char l1;
		cin>>l1;
		a[i].cnnt=l;
		a[i].co=l1;
	}
	for(int i=1;i*2<=ans;i++){
		if(a[i].co!=a[ans-i+1].co){
			cnt+=min(a[i].cnnt,a[ans-i+1].cnnt);
		}
		else if(a[i].cnnt != a[ans-i+1].cnnt && a[i].co==a[ans-i+1].co && a[i+1].co !=a[ans-i+1].co){
			cnt+=abs(a[i].cnnt-a[ans-i+1].cnnt);
		}
	}
	cout<<cnt;
	return 0;
}
