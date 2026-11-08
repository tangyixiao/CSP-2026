#include<bits/stdc++.h>
using namespace std;
using s=string;
using ll=long long;
ll m,n,an,a[10001],b[10001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=m;i++){
		ll k=n-i;
		if(an==0){
			an+=a[k];
		}else if(i==2){
			an+=(a[k]&an);
		}else{
			break;
		}
		//cout<<an<<"]"<<a[k]<<"]"<<i<<"|\n";
	}
	cout<<an;
	
	return 0;
} 
