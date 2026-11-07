#include <bits/stdc++.h>
using namespace std;
long long n,ans,a[210001],l,r;
char s[210001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;l=1,r=n;
	for(long long i=1;i<=n;i++)
		cin>>a[i]>>s[i];
	while(l<r){
		if(a[l]<a[r]){
			if(s[r]!=s[l])ans+=a[l];
			a[r]-=a[l],l++;
		}else{
			if(a[l]>a[r]){
				if(s[r]!=s[l])ans+=a[r];
				a[l]-=a[r],r--;
			}else{
				if(s[r]!=s[l])ans+=a[l];
				l++,r--;
			}
		}
	}
	cout <<ans;
	return 0;
}
