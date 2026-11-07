#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct ss{
	ll len;
	char c;
};
int n;
ss a[200009];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i].len >> a[i].c;
	}
	int l=0,r=n-1;
	ll res = 0;
	while(l < r){
		if(a[l].len > a[r].len){
			if(a[l].c != a[r].c){
				res += a[r].len;
			}
			a[l].len -= a[r].len;
			r--;
		}else if(a[l].len == a[r].len){
			if(a[l].c != a[r].c){
				res += a[l].len;
			}
			l++;
			r--;
		}else{
			if(a[l].c != a[r].c){
				res += a[l].len;
			}
			a[r].len -= a[l].len;
			l++;
		}
	}
	cout << res << endl;
	return 0;
} 
