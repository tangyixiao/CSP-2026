#include<bits/stdc++.h>
using namespace std;
string a;
int shu[200005],n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	long long p = 0;
//	int u = 1;
	for(int i = 1;i <= n;i++){
		cin >> shu[i];
		string x;
		cin >> x;
		for(int j = 1;j <= shu[i];j++){
			a += x;
		}
		p += shu[i];
	}
	int ans = 0;
	for(int i = 0;i < p/2+1;i++){
		if(a[i] != a[p-i-1])ans++;
	}
	cout << ans;
	return 0;

//	if(u == 1)cout << 0;
//	else {
//		long long pos = p/2+1,ans = 0;
//		int j = n;
//		long long x = 0,y = p;
//		int p 
//		while(y != pos){
//			string lin = a[i-1];
//			long long x1 = x+shu[i];
//			long long y1 = p-x1-x+1;
//			long long jishu = y-y1;
//			while(jishu > 0){
//				jishu -= j
//			}
//		}
//	}
}















