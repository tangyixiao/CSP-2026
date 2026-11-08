#include<bits/stdc++.h>
using namespace std;
long long n,m;
const int N=5*1e5+10;
long long a[N];
int main(){
	freopen("crystal.in", "r", stdin);
	freopen("crystal.out", "w", stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	long long ans=1;
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++){
		
		if(m-abs((a[i+1]-a[i])*i)>=0){
			m-=abs(a[i+1]-a[i])*i;
			ans++;
		}
		else{
			break;
		}
	}
	cout<<ans;
	return 0;
}
