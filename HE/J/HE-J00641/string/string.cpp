#include <bits/stdc++.h>
using namespace std;
struct q{
	int c;
	char s;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	if (n==1) cout << 0;
	else if (n==2){
		int a1,a2;
		string s1,s2;
		cin >> a1>> s1 >> a2 >> s2;
		if (s1 == s2) cout << 0;
		else if((a1 + a2)%2==0) cout << min(a1,a2);
		else cout << max(a1,a2) - 1;
	}
	else{
		long long sum=0;
		for (int i=1;i<=n;i++){
			cin >> a[i].c >> a[i].s;
			sum += a[i].c;
		}
		if (sum <= 1000000){
			char ss[1000000];
			long long sss=0;
			for (int i=1;i<=n;i++){
				for (int j=1;j<=a[i].c;j++){
					ss[sss] = a[i].s;
					sss++;
				}
			}
			int ii=0,jj=sum-1,ans = 0;
			while(ii<jj){
				if(ss[ii]!=ss[jj]){
					ans++;
				}
				ii++,jj--;
			}
			cout << ans;
		}
		else cout << sum/2;
	}
	return 0;
}
