#include<bits/stdc++.h>

using namespace std;
/*
scanf("%d", &x);
printf("%d", x);
*/
#define ll long long
const int N = 2e5 + 10;
const ll kInf = (ll)1ll * 1e18;
int n;
ll len;
int a[N];
char c[N];
ll st[N], nd[N];

ll cnt = 0ll;

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w",stdout);
	
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> c[i];
		nd[i] = nd[i - 1] + (ll)1ll * a[i];
		st[i] = nd[i - 1] + 1ll;
	}
	nd[n + 1] = kInf; st[n + 1] = kInf;
	len = nd[n]; ll zy = len / 2;
	
	bool oo = true;
	for(int i = 1; i <= n && oo; i++){
		if(nd[i] >= zy){
			oo = false;
			nd[i] = zy;
		}
		ll stt = len - nd[i] + 1; 
		ll ndd = len - st[i] + 1;
		
//		cout << "Start " << st[i] << ' ' << nd[i] << ' '; 
//		cout << stt << ' ' << len - st[i] + 1 << ' ';
		
		int idi = lower_bound(nd + 1, nd + 1 + n, stt) - nd;
		int idj = upper_bound(st + 1, st + 1 + n, ndd) - st - 1;
//		cout << idi << ' ' << idj << '\n';
		for(int j = idi; j <= idj; j++){
			ll num = min(ndd, nd[j]) - max(stt, st[j]) + 1;
			if(c[i] == c[j]){
				continue;
			}
			else{
				cnt += num;
			}
		}
	}
	
	cout << cnt;
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
/*
3
2 a
2 b
1 c

2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

3
1 a
6 b
2 a
*/
