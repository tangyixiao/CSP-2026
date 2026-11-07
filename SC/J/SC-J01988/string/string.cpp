#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;

struct node{
	long long l, r;
	int c;
}e[N];

int n; 
long long midl, midr;
long long ii = 1;
void init(){
	scanf("%d", &n);
	for(int i = 1;i <= n;i ++){
		int a;
		scanf("%d", &a);
		string b;
		cin >> b;
		e[i].l = ii;
		ii += a;
		e[i].r = (ii - 1);
		e[i].c = (b[0] - 'a');
	}
	ii --;
	midl = ii / 2;
	if(ii & 1){
		midl ++;
		midr = midl;
	}
	else{
		midr = midl + 1;
	}
	return ;
}

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout); 
	init();
	int l = 1, r = n;
	long long ll = 1, rr = ii;
	long long ans = 0;
	while(l < r){
		long long x, y;
		x = e[l].r, y = e[r].l;
		if(midl - x == y - midr){
			long long k = (rr - e[r].l + 1);
			if(e[l].c != e[r].c){
				ans += k;
			}
			r --;
			rr = e[r].r;
			l ++;
			ll = e[l].l;
		}
		else if(midl - x < y - midr){
			long long k = (rr - e[r].l + 1);
			if(e[l].c != e[r].c){
				ans += k;
			}
			r --;
			rr = e[r].r;
			ll += k;
		}
		else{
			long long k = (e[l].r - ll + 1);
			if(e[l].c != e[r].c){
				ans += k;
			}
			l ++;
			ll = e[l].l;
			rr -= k;
		}
//		cout << "l = " << l << " " << "ll = " << ll << " " << e[l].l << " " << e[l].r << endl; 
//		cout << "r = " << r << " " << "rr = " << rr << " " << e[r].l << " " << e[r].r << endl;
//		cout << ans << endl;
	}
	
	printf("%lld\n", ans);
	
	
	
	
	return 0;
}