#include <bits/stdc++.h>
using namespace std;
const long long MAXN = 200050;
vector<long long> v,e;
long long t = 1,n,ans,data1[MAXN],sum,cnt,L[2 * MAXN],R[2 * MAXN],m,pos;
char data2[MAXN],data3[2 * MAXN];
inline void solve();
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	while (t --){
		solve();
	}
	return 0;
}
inline void solve(){
	cin >> n;
	for (long long i = 1;i <= n;i ++){
		cin >> data1[i] >> data2[i];
		m += data1[i];
	}
	v.push_back(0);
	for (long long i = 1;i <= n;i ++){
		sum += data1[i];
		v.push_back(sum);
	}
	sum = m;
	for (long long i = 1;i <= n;i ++){
		sum -= data1[i];
		v.push_back(sum);
	}
	sort(v.begin(),v.end());
	e.push_back(v[0]);
	for (long long i = 1;i < v.size();i ++){
		if (v[i] != v[i - 1]){
			e.push_back(v[i]);
		}
	}
	v = e;
	cnt = v.size() - 1;
	for (long long i = 1;i <= cnt;i ++){
		L[i] = v[i - 1];
		R[i] = v[i];
	}
	for (long long i = 1;i <= n;i ++){	
		data1[i] += data1[i - 1];
	}
	pos = 0;
	for (long long i = 1;i <= cnt;i ++){
		while (data1[pos] < R[i]){
			pos ++;
		}
		data3[i] = data2[pos];
	}
	for (long long i = 1;i <= (cnt >> 1);i ++){
		ans += (data3[i] != data3[cnt - i + 1]) * (R[i] - L[i]);
	}
	cout << ans << '\n';
	return ;
}