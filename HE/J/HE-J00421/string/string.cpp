#include <bits/stdc++.h>
#define int long long
using namespace std; 
const int N = 2e5+10;
struct node{
	int a;
	char c;
}k[N];
int ans;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for(int i =1;i<=n;i++){
		cin >> k[i].a >> k[i].c;
	}
	int l=1,r=n;
	while(l < r){
		if(k[l].a > k[r].a){
			if(k[l].c == k[r].c ){
				k[l].a -= k[r].a;
				r--;
			}
			else{
				ans += k[r].a;
				k[l].a -= k[r].a;
				r--;
			}
		}else if(k[l].a < k[r].a ){
			if(k[l].c == k[r].c ){
				k[r].a -= k[l].a;
				l++;
			}
			else{
				ans += k[l].a;
				k[r].a -= k[l].a;
				l++;
			}
		}else{
			if(k[l].c == k[r].c ){
				r--;
				l++;
			}
			else{
				ans += k[r].a;
				r--;
				l++;
			}
		}
	}
	cout << ans;
	return 0;
}
