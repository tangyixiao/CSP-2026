#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 666;

long long a[N];

//string f[N];

struct S{
	string s;
	int id;
}f[N];

bool cmp(S a,S b){
	return a.s > b.s;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		f[i].id = i;
		for(int k = 30;k >= 0;k--){
			if((a[i] >> k) & 1) {
			    f[i].s += "1";
			}else f[i].s += "0"; 
		}
	}
	
	sort(f+1,f+1+n,cmp);
	
	long long ans;	
	for(int k = 0;k <= 30;k++){
		int sum = 0;
		ans = 0;
		for(int i = 1;i <= n;i++){
			if(f[i].s[k] == '1') {
				if(ans == 0)  ans = a[f[i].id];
				sum++;
				ans &= a[f[i].id];
			}
			if(sum == m)  break;
		}
		if(sum == m)   break;
	}
	
	cout << ans;
	return 0;
} 
