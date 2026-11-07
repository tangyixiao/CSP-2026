//Ë«Ö¸Õë + Æ¥Åä 
#include<bits/stdc++.h>
#define N 200009
using namespace std;
typedef long long ll;

int n;
ll a[N], ans = 0;
char c[N];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	for(int i=1; i<=n; i++) cin >> a[i] >> c[i];
	
	int p1 = 1, p2 = n;
	while(p1 < p2){
		if(c[p1] != c[p2]) ans += min(a[p1], a[p2]);
		if(a[p1] > a[p2]){
			a[p1] -= a[p2];
			p2--;
		}else if(a[p1] < a[p2]){
			a[p2] -= a[p1];
			p1++;
		}else{
			p1++;
			p2--;
		}
	}
	
	cout << ans;
	return 0;
} 
