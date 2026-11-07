#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n,m;
	cin>>n>>m;
	vector<long long> vec(n);
	for(long long i = 0;i < n;i++){
		cin>>vec[i];
	}
	sort(vec.begin(),vec.end(),greater<long long>());
	long long ans = vec[0];
	for(long long i = 0;i < m - 1;i++){
		ans = ans & vec[i + 1];
	}
	cout<<ans<<'\n';
	return 0;
}
