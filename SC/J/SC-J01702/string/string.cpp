#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5+10;

string s;
int n;
struct node{
	ll a;
	char c;
}a[N];
ll cnt = 0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	int an;
	char c;
	for (int i = 0;i < n;i ++){
		cin >> an >> c;
		if (i>=1 && c==a[i-1].c){
			a[i-1].a += an;
			n --;
			i --;
		}else{
			a[i].a = an;
			a[i].c = c;
		}
	}
	
	for (int l = 0,r = n-1;l <= r;l++,r--){
		if (a[l].a==a[r].a && a[l].c!=a[r].c){
			cnt += a[l].a;
			a[l].c = a[r].c;
		}else if (a[l].a!=a[r].a && a[l].c==a[r].c){
			if (abs(r-l)<=1) break;
			cnt += abs(a[l].a-a[r].a);
			if (a[l].a > a[r].a){
				a[l+1].a += a[l].a-a[r].a;
				a[l].a = a[r].a;
				a[l].c = a[r].c;
			}else {
				a[r-1].a += a[r].a-a[l].a;
				a[r].a = a[l].a;
				a[r].c = a[l].c;	
			}
		}else if (a[l].a!=a[r].a && a[l].c!=a[r].c){
			if (abs(r-l) <= 1){
				cnt += min(a[l].a,a[r].a);
				break;
			}
			cnt += max(a[r].a,a[l].a);
			if (a[l].a>a[r].a){
				a[l+1].a += a[l].a-a[r].a;
				a[l].a = a[r].a;
				a[l].c = a[r].c;
			}else{
				a[r-1].a += a[r].a-a[l].a;
				a[r].a = a[l].a;
				a[r].c = a[l].c;	
			}
		}
	}
	
	cout << cnt;
	
	return 0;
}