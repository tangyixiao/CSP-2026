#include<bits/stdc++.h>
using namespace std;
long long a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	string s,s1;
	long long n,m,ans=-1;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> s1;
		for(int j=0;j<=s1.size();j++){
			a[i]=a[i]*10+s1[j]-'0';
		}
		s=max(s,s1);
	}
	sort(a+1,a+n+1);
	if(m==1)
		cout << s;
	else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout << ans;
	}
	else if(m==2){
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		cout << ans;
	}
	else if(m==n-1){
		ans=a[n];
		for(int i=n-1;i>1;i--){
			ans=ans&a[i];
		}
		cout << ans;
	}
	return 0;
} 