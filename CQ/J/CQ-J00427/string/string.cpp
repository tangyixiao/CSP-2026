#include <bits/stdc++.h>
using namespace std;
namespace contest{
	int n;
	long long a[200005];
	char c[200005];
	long long sum[200005];
	string s;
	int main(){
		cin>>n;
		for (int i=1;i<=n;i++){
			cin>>a[i]>>c[i];
			sum[i]=sum[i-1]+a[i];
		}
		if (sum[n]<100000000){
			for (int i=1;i<=n;i++) for (int j=1;j<=a[i];j++) s+=c[i];
			int len=s.size();
			s=' '+s;
			int ans=0;
			for (int i=1;i<=len/2;i++) if (s[i]!=s[len-i+1]) ans++;
			cout<<ans;
			return 0;
		}
		long long ans=0;
		int lst=n;
		for (int i=1;i<=n/2;i++){
			if (c[i]!=c[lst]){
				if (a[i]==a[lst]){
					ans+=a[i];
					lst--;
				}
				else if (a[i]>a[lst]){
					int zg=0;
					int k=lst;
					while (zg+a[k]<a[i]){
						if (c[k]!=c[i]) ans+=a[k];
						zg+=a[k];
						k--;
					}
					a[k]-=(a[i]-zg);
					lst=k;
					if (c[k]!=c[i]) ans+=(a[i]-zg);
				}
				else{
					ans+=a[i];
					int zg=0;
					int k=i;
					while (zg+a[k]<a[lst]){
						if (c[k]!=c[lst]) ans+=a[k];
						zg+=a[k];
						k++;
					}
					lst=k;
					a[k]-=(a[lst]-zg);
					if (c[k]!=c[lst]) ans+=(a[lst]-zg);
				}
			}
		}
		cout<<ans;
		return 0;
	}
};
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	contest::main();
	return 0;
}
