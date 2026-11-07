#include<bits/stdc++.h>
using namespace std;
int n,a,l,d,ans;
string c,s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>c;
		l+=a;
		for(int j=0;j<a;j++)s+=c;
	}
	d=l;
	if(l%2==1)d++;
	d/=2;
	if(l%2==1)for(int i=d-2,j=d;i>=0;i--,j++)if(s[i]!=s[j])ans++;
	if(l%2==0)for(int i=d-1,j=d;i>=0;i--,j++)if(s[i]!=s[j])ans++;
	cout<<ans;
	return 0;
} 