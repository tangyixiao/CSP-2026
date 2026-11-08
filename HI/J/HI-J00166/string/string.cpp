#include<bits/stdc++.h>
using namespace std;
long long n,x,ans = 0;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		scanf("%d %c",&x,&c);
		for(int j = 1;j<=x;j++){
			s = s+c;
		}
	}
	int len = s.size();
	for(int i = 0;i<len/2;i++){
		if(s[i]!=s[len-i-1]){
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
}

