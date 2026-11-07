#include<bits/stdc++.h>
using namespace std;
long long a[200005],b[200005];
char s[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	long long n,p,q,ans=0;
	cin>>n;
	p=1;q=n;
	for(int i=1;i<=n;i++)cin>>a[i]>>s[i];
	while(p<q){
		if(a[p]<a[q]){
			if(s[p]!=s[q])ans+=a[p];
			a[q]-=a[p];
			p++;
			continue;
		}else if(a[p]==a[q]){
			if(s[p]!=s[q])ans+=a[p];
			a[p]=0;a[q]=0;
			p++;q--;
			continue;
		}else{
			if(s[p]!=s[q])ans+=a[q];
			a[p]-=a[q];
			q--;
			continue;
		}
	}
	cout<<ans;
	return 0;
}
