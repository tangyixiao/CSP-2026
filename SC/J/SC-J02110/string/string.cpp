#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int n;
long long len,ans;
long long pos1,pos2;//pos1记录头，pos2记录尾
long long a[N];
char c[N];
int main(){
	
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i] >> c[i];
		long long l = len;
		a[i] = a[i] + len;
		len += a[i] - l;
	}
	//for(int i = 1;i <= n;i++) cout << a[i] << ' ';
	//cout << '\n';
	pos1 = 1,pos2 = len;
	//cout << pos1 << ' ' << pos2 << '\n';
	int i = 1,j = n;//sec1与sec2所在的区间的下标 
	
	while(pos1 < pos2 && i != j){
		long long l1 = a[i] - pos1 + 1,l2 = pos2 - a[j - 1];
		//cout << l1 << ' ' << l2 << ' ';
		if(l1 < l2){
			if(c[i] != c[j]) ans += l1;
			i++;
			//cout << i << ' ';
			pos1 += l1;
			pos2 -= l1;
			//cout << pos1 << ' ' << pos2 << '\n';
		} else if(l1 > l2){
			if(c[i] != c[j]) ans += l2;
			j--;
			//cout << j << ' ';
			pos1 += l2;
			pos2 -= l2;
			//cout << pos1 << ' ' << pos2 << '\n';
		} else {
			if(c[i] != c[j]) ans += l1;
			i++,j--;
			//cout << i << ' ' << j << ' ';
			pos1 += l2;
			pos2 -= l2;
			//cout << pos1 << ' ' << pos2 << '\n';
		}
	}
	cout << ans;
	return 0;
}