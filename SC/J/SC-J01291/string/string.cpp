#include<bits/stdc++.h>
using namespace std;
int n;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		int a;char c;
		scanf("%d %c",&a,&c);
		while(a--){
			s+=c;
		}
	}
	int len=s.length(),mid=len>>1;
	for(int i=0;i<=mid;i++){
		if(s[len-1-i]!=s[i]){
			s[i]=s[len-1-i];
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
} 