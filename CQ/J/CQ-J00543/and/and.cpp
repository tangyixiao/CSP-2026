#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool ispow(ll n){
	int eps=log2(n);
	return ((ll)pow(2,eps)==n)?true:false;
}
bool cmp(ll a,ll b){
	return (a>b?true:false);
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,k;
	scanf("%d %d",&n,&k);
	vector<ll> a(n);
	for(int i=0;i<n;i++) {
		scanf("%ld",&a[i]);
	}
	sort(a.begin(),a.end(),cmp);
	ll ans=a[0];
	int count=1,idx=1;
	while(count!=k){
		if(ispow(ans+a[idx]+1)){
			idx++;
			continue;
		}
		ans &= a[idx];
		count++;
		idx++;
	}
	cout<<ans;
	return 0;
}
//Snow-Grief-Arc-Recall-Rain
//Waves-Silent-Illusion-Overfly-Destiny
