#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200010],ans;
char x,s[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>s[i];
	for(int i=1;i<=n;){
		if(a[i]==a[n]){
			if(s[i]!=s[n])ans+=a[i];
			i++,n--;
		}else if(a[i]>a[n]){
			if(s[i]!=s[n])ans+=a[n];
			a[i]-=a[n];
			n--;
		}else{
			if(s[i]!=s[n])ans+=a[i];
			a[n]-=a[i];
			i++;
		}
	} 
	cout<<ans;
}