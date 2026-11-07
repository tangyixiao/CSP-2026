#include <bits/stdc++.h>
#define maxn 200005
#define ll long long
using namespace std;
int n,m,a[maxn]; 
bool tw(int a){
	while(a>2){
		a/=2;
		if(a%2!=0){
			return false;
		}
	}
	return true;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	ll ans;
	bool check=false;
	int sum=n-1-m;
	if(m==1){
		cout<<a[n-1];
		return 0;
	}
	for(int i=n-1;i>sum;i--){
		if(tw(a[i])==true&&sum>0){
			sum--;
			continue;
		}
		if(check==false){
			ans=a[i];
			check=true;
		}else{
			ans=ans&a[i];
		}
	}
//	cout<<a[n-1]<<" ";
	cout<<ans<<"\n";
	return 0;
}

