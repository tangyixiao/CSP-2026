#include <bits/stdc++.h>
using namespace std;
long long n, cnt;
long long a[200010];
char c[200010];
string s, rs, bs;
bool f0(string s){
	string rs = "";
	for(int i=s.length()-1;i>=0;i--){
		rs += s[i];
	}
	if(rs == s) return 1;
	else return 0;
}

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		scanf("%lld", &a[i]);
		cin >> c[i];
	}
	bool d = true;
	for(int i=2;i<=n;i++)
		if(a[i] != a[i-1]) d = false;
	long long x = a[1];
	if(d) for(int i=1;i<=n;i++) a[i] = 1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++)
			s+=c[i];
	}
//	for(int i=1;i<=n;i++) cout << a[i] << " " << d << endl;
	if(f0(s)){
		cout << 0;
		return 0;
	}else{
		 
		if(s.length()%2 == 0){	
			for(int i=s.length()-1;i>=s.length() / 2;i--){
				rs += s[i];
			}
			for(int i=0;i<s.length() / 2;i++){
				if(s[i] != rs[i]) cnt ++;
			}
		}else{
			for(long long i=s.length()-1;i>=(s.length()+1) / 2;i--){
				rs += s[i];
			}
			for(long long i=0;i<(s.length()-1) / 2;i++){
				if(s[i] != rs[i]) cnt ++;
			}
		}
	}
	if(d)cnt *= x;
	cout << cnt;
	return 0;
}
