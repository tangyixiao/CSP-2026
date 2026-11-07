#include<bits/stdc++.h>
using namespace std;
int n,a[200020],k;
long long suma[200020],cnt,ans;
char c[200020];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1; i <= n; i++){
		scanf("%d%c",&a[i],&c[i]);
		suma[i]=suma[i-1] + a[i];
		for(int j = cnt+1;j <= cnt+a[i];j++){
			s[j]=c[i];
		}
		cnt+=a[i];
	}
	for(int i = 1; i <= n; i++){
		if((suma[n]+1)/2<=suma[i] && (suma[n]+1)/2>suma[i-1]) k=i;
	}
	for(int i = (cnt+1)/2; i >= 1; i--){
		if(s[i]!=s[suma[n]+1-i]) ans++;
	}
	cout << ans;
	return 0;
	/*
2
2 a
3 a
	*/
}
