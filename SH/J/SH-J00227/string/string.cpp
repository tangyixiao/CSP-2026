#include <bits/stdc++.h>
using namespace std;
long long n,a[200010],cnt,ans,sum;
char s[200010],m[100010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i]>>s[i];
		cnt+=a[i];
		for(int j=1;j<=a[i];++j){
			sum++;
			m[sum]=s[i];
		}
	}
	for(int i=1;i<=cnt/2;++i){
		if(m[i]!=m[cnt-i+1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
