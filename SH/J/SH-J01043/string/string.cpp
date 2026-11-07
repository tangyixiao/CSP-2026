#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+7;
struct shu{
	ll shu;
	char zi;
}a[N];
ll ans;
int main(){
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
	ll n;
	cin>>n;
	ll zong=0;
	for(int i=1;i<=n;i++){
		cin>>a[i].shu>>a[i].zi;
//		scanf("%lld%c",&a[i].shu,&a[i].zi);
		zong+=a[i].shu;
		cout<<n<<"/"<<i<<endl;
	}
	ll l=1,r=n;
	while(l+1!=r){
		if(a[l].shu==0)l++;
		if(a[r].shu==0)r--; 
		if(a[l].shu<=a[r].shu&&a[l].zi!=a[r].zi){
			ans+=a[l].shu;
			a[r].shu-=a[l].shu;
			a[l].shu=0;
//			cout<<"/1/";
		}else if(a[l].shu<=a[r].shu&&a[l].zi==a[r].zi){
			a[r].shu-=a[l].shu;
			a[l].shu=0;
//			cout<<"/2/";
		}else if(a[l].shu>=a[r].shu&&a[l].zi!=a[r].zi){
			ans+=a[r].shu;
			a[l].shu-=a[r].shu;
			a[r].shu=0;
//			cout<<"/3/";
		}else if(a[l].shu>=a[r].shu&&a[l].zi==a[r].zi){
			a[l].shu-=a[r].shu;
			a[r].shu=0;
//			cout<<"/4/";
		}
//		cout<<l<<" "<<r<<endl;
	}
	cout<<ans;
	return 0;
}
