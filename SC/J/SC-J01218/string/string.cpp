#include<bits/stdc++.h>
using namespace std;
int n,len;
long long a[200005];
char c[200005];
int xiugai(string s){
	int cnt=0,len=s.size();
	for(int i=0;i<len/2;i++){
		if(s[i]!=s[len-i-1]){
			cnt++;
		}
	}
	return cnt;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%lld %c",&a[i],&c[i]);
	string s;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
    printf("%d",xiugai(s));
	return 0;
}