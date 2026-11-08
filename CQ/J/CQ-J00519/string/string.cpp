#include<bits/stdc++.h>
using namespace std;
int n;
int ans=0,len=0,a[200005];
char s[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		char b;
		scanf("%lld",&a[i]);
		scanf("%s",&b);
		len+=a[i];
		for(int j=len-a[i];j<len;j++){
			s[j]=b;
		}
	}
	if(len%2==1){
		for(int i=0;i<(len-1)/2;i++){
			if(s[i]!=s[len-i-1]){
				ans++;
			}
		}
	}
	if(len%2==0){
		for(int i=0;i<len/2;i++){
			if(s[i]!=s[len-i-1]){
				ans++;
			}
		}
	}
	printf("%lld",ans);
	return 0;
}
