#include<bits/stdc++.h>
using namespace std;
int n,a[200001];
long long ans;
char c[200001];
string s;
int main(){
	freopen("string.in","r",stdin);freopen("string.out","w",stdout);
	scanf("%d",&n);int len=0;
	for(int i=1;i<=n;++i){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];++j) s+=c[i];
	}
	len=s.size();
	for(int i=0;i<=len/2;++i){
		if(s[i]!=s[len-i-1]) ans++;
	}
	printf("%lld",ans);
	fclose(stdin);fclose(stdout);
	return 0;
}