#include <bits/stdc++.h>
using namespace std;

long long n,a[200005],cnt,cnt_;
char s[1005],s_[1005];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(long long i=1;i<=n;i++){
		cin >> a[i];
		cnt_+=a[i];
			for(long long j=1;j<=a[i];j++){
				cin >> s[cnt_+j];
				s_[i]=s[cnt_+j];
		}
	}
	for(long long i=1;i<=n;i++){
		if(s[i]!=s_[cnt_-i+1]) cnt++;
	}
	cout << cnt;
	return 0;
}
