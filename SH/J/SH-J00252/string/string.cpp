#include<bits/stdc++.h>
using namespace std;

struct data{
	long long id;
	string s;
}a[200005];

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, b, c;
	long long cnt = 0, tot = 0;
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i].id >> a[i].s;
		cnt += a[i].id;
	}
	int l = 1, r = n;
	while(l <= r){
		if(a[l].id > a[r].id){
			if(a[l].s != a[r].s){
				tot += a[r].id;
			}
			a[l].id -= a[r].id;
			r--;
		}
		if(a[l].id == a[r].id){
			if(a[l].s != a[r].s){
				tot += a[r].id;
			}
			r--;
			l++;
		}
		if(a[l].id < a[r].id){
			if(a[l].s != a[r].s){
				tot += a[l].id;
			}
			a[r].id -= a[l].id;
			l++;
		}
	}
	cout << tot;
	return 0;
} 
