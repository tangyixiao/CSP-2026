#include<bits/stdc++.h>
using namespace std;
struct no {
	char m;
	int num;
};
vector<no> V;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int n;
	cin >> n;
	for (int i = 1;i <= n;i ++){
		int a;
		cin >> a;
		char c;
		cin >> c;
		V.push_back({c,a});
	}
	long long ans = 0;
	int i,j;
	if(n % 2 == 0){
		i = n / 2 - 1;
		j = i + 1;
	}
	else{
		i = j = n / 2;
	}
	while(i >= 0 and j < n){
		if(V[i].m != V[j].m){
			long long minv = max(V[i].num,V[j].num);
			ans += minv;
		}
		i --;
		j ++;
	}
	cout << ans;
	return 0;
}