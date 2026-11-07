#include<bits/stdc++.h>
using namespace std;
int const N = 5e5 + 50;
long long n,m;
long long a[N],b[N],r[N],ans[N];
void play(int x){
	if(x > n){
		return;
	}
	memset(b,0,sizeof(b));
	memset(r,0,sizeof(r));
	long long t = 0;
	for(int i = x - 1;i < n;i++){
		b[a[i]]++;
		if(b[a[i]] > 1){
			while(true){
				if(r[t - 1] == a[i]){
					r[--t] = 0;
					break;
				}
				r[--t] = 0;
			}
			b[a[i]]--;
		}
		r[t++] = a[i];
//		for(int i = 0;i < t;i++){
//			cout << r[i] << " ";
//		}
//		cout << "   " << t;
//		cout << endl;
	}
//	for(int i = 0;i < t;i++){
//			cout << r[i] << " ";
//		}
//	cout << endl;
//	cout << endl;
	for(int i = 0;i < t;i++){
			ans[r[i]- 1]++;
	}
	play(x + 1);
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	play(1);
	for(int i = 0;i < m;i++){
		cout << ans[i] << " ";
	}
	return 0;
}
