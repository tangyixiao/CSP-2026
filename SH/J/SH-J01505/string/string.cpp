#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200009],ans=0;
char s[200009];
string m;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i]>>s[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<a[i];j++)
		m+=s[i];
	}
	int len=m.size();
	for(int i=0;i<len/2;i++)
		if(m[i]!=m[len-1-i])ans++;
	cout<<ans;
	return 0;
}
