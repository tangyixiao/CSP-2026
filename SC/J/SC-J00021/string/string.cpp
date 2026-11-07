#include<bits/stdc++.h>
using namespace std;
int n;
struct stu {
	long long a;
	string s;
} d[200005];
long long j,k;
long long num = 0;
long long all = 0;
long long f[200005],g[200005];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> d[i].a >> d[i].s;
		all+=d[i].a;
		g[i]=all;
	}
	
	for(int i=n;i>=1;i--){
		f[i]=f[i+1]+d[i].a;
	}
	j=n;
	k=1;
	for (int i = 1; i <= all/2; i++) {
		if(i>f[j]){
			j--;
		}
		if(g[k]<i){
			k++;
		}
		if(d[j].s!=d[k].s){
			num++;
		}
	}
	cout<<num;
	return 0;
}