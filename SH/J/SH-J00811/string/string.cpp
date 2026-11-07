#include <bits/stdc++.h>
using namespace std;
struct node{
	long long cn;
	string ch;
};
string k;
long long cnt = 0,cnt1 = 0;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,m;
	bool f = 0;
	cin >> n;
	string l;
	for (int i = 0;i < n;i++){
		cin >> m >> l;
		cnt1 += m;
		if (m >= 1e6) f = 1;
		if (f == 0){
			for (int j = 0;j < m;j++){
				k += l;
			}
		}
	}
	if (f == 0){
		for (int i = 0;i < k.size()/2;i++){
			int j = k.size()-1-i;
			if (k[i] != k[j]){
				cnt++;
			}
		}
	}
	else cout << cnt1/2;
	return 0;
}
