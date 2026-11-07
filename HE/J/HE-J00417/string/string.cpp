#include<bits/stdc++.h>
using namespace std;

int n;
string c;
string s;
long long a[2000010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1;i <= n;i++){
		cin>>a[i];
		cin>>c[i];
	}
	
	long long  cnt = 1;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= a[i];j++){
			s[cnt] = c[i];
			cnt++;
		}
	}
	long long cnt2 = 1;
	long long ans = 0;
	for(int i = cnt - 1;i >= 1;i--){
		if(s[i] != s[cnt2])ans++;
		cnt2++;
	}
	
	cout<<ans/2;
	return 0;
}
