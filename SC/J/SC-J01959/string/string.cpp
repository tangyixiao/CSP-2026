#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],s[200005],ans;
char o;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>o;
		s[i]=int(o-'a')+1;
	}
	int j=n;
	for(int i=1;i<=j;i++){
		if(i==j)break;
		while(a[i]>=a[j]){
			if(s[i]!=s[j])ans+=a[j];
			a[i]-=a[j];
			j--;
		}
		if(a[i]<=a[j]){
			if(s[i]!=s[j])ans+=a[i];
			a[j]-=a[i];
		}
	}
	cout<<ans;
	return 0;
}