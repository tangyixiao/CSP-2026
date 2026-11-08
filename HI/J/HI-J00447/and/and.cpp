#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll s[200005];
ll n , m;
bool cmp(ll x , ll y){
	return x > y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	ll max1 = 0 , num = 0;
	for(int i = 1 ; i <= n ; i++) cin >> s[i];
	sort(s+1,s+n+1,cmp);
	for(int i = 1 ; i <= n - m ; i++){
		num = s[i];
		for(int j = i+1 ; j < i+m ; j++){
			num = (num&s[j]);
		}
		max1 = max(max1,num);
	}
	
	cout << max1;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
