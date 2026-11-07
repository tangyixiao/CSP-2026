#include<bits/stdc++.h>
using namespace std;
int n,MAX;
long long len,ans;
struct node{
	int a;
	char c;
}s[200005];
string s1,s2;
void solve1(){
	string str;
	for(int i=1;i<=n;i++){
		int k=s[i].a;
		while(k--)str+=s[i].c;
	}
	for(int i=0;i<len/2;i++){
		if(str[i]!=s2[len-i])ans++;
	}
	cout<<ans;
} 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].a>>s[i].c;
		len+=s[i].a;
		MAX=max(MAX,s[i].a);
	}
	if(n<=2000&&MAX<=50){
		solve1();
		return 0;
	}
	else{
		len/=2;
		long long zz=0,cnt=0,rest=0;
		while(zz<len){
			if(zz+s[++cnt].a<=len){
				int k=s[cnt].a;
				zz+=k;
				while(k--)s1+=s[cnt].c;
			}
			else{
				rest=s[cnt].a-(len-zz);
				int k=len-zz;
				while(k--)s1+=s[cnt].c;
			}
		}
		zz=0;
		if(rest){
			zz+=rest;
			while(rest--) s2+=s[cnt].c;
		}
		while(zz<len){
			int k=s[++cnt].a;
			zz+=k;
			while(k--)s2+=s[cnt].c;
		}
		for(int i=0;i<len;i++){
			if(s1[i]!=s2[len-i])ans++;
		}
		cout<<ans;
	}
	return 0;
}
