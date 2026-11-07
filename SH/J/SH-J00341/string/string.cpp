#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
struct info{
	ll num;
	char c;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n;
	vector<info> a(n+1);
	for(int i=0;i<n;i++){
		cin>>a[i].num>>a[i].c;
	}
	ll ans=0;
	for(int l=0,r=n-1;l<r;){
		if(a[l].c!=a[r].c){
			ans+=min(a[l].num,a[r].num);
		}
		int num1=min(a[l].num,a[r].num);
		a[l].num-=num1;
		a[r].num-=num1;
		if(a[r].num==0){
			r--;
		}else if(a[l].num==0){
			l++;
		}else{
			r--,l++;
		}
	} 
	cout<<ans<<"\n";
	return 0;
}

