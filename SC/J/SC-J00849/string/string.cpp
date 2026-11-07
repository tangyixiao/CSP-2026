#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int maxn = 2e5 + 10;
inline int read(){
	int res = 0,f = 1; char ch = getchar();
	while (!isdigit(ch)){if (ch == '-') f = -1; ch = getchar();}
	while (isdigit(ch)){res = res * 10 + (ch - '0'); ch = getchar();}
	return res * f;
}
int n;
int a[maxn];
char c[maxn];
int s[maxn];

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	n = read();
	for (int i = 1;i <= n;i++){
		a[i] = read(); c[i] = getchar(); s[i] = s[i - 1] + a[i];
	}
	int mid = lower_bound(s + 1,s + n + 1,s[n] / 2) - s;
	int sum = 0;
	int Lw,Lval,Rw,Rval;
	if (s[n] & 1){
		if (s[mid] == s[n] / 2){
			Lw = mid; Lval = a[Lw];
			Rw = mid + 1; Rval = a[Rw] - 1;
		}else{
			Lw = mid; Lval = s[n] / 2 - s[mid - 1];
			Rw = mid; Rval = a[mid] - Lval - 1;
		}
	}else{
		if (s[mid] == s[n] / 2){
			Lw = mid; Lval = a[Lw];
			Rw = mid + 1; Rval = a[Rw];
		}else{
			Lw = mid; Lval = s[n] / 2 - s[mid - 1];
			Rw = mid; Rval = a[mid] - Lval;
		}
	}
	while (Lw >= 1 && Rw <= n){
		if (Lval == Rval){
			if (c[Rw] != c[Lw]) sum += Lval;
			Lw--; Rw++; Lval = a[Lw]; Rval = a[Rw];
		}else if (Lval > Rval){
			if (c[Rw] != c[Lw]) sum += Rval;
			Lval -= Rval; Rw++; Rval = a[Rw];
		}else{
			if (c[Rw] != c[Lw]) sum += Lval;
			Rval -= Lval; Lw--; Lval = a[Lw];
		}
	}
	cout << sum;
	//这个做法细节想了挺久的，没想到一遍打出来了
	//10:58:47 
	return 0;
}