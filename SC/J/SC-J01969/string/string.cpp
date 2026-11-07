#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll T,n,len,len2;
ll ans;
char c;
string s1,s2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>T;
	while(T--){
		cin>>n;
		cin>>c;
		for(int i=0;i<n;i++){
			s1[len++]=c;
		}
	}
	for(int i=len-1;i>=0;i--)
		s2[len2++]=s1[i];
	for(int i=0;i<len;i++){
		if(s1[i]!=s2[i])ans++;
	}
	cout<<ans/2;
	return 0;
}//32pts