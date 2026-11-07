#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],ans;
char b[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	long long j=n;
	for(long long i=1;i<=n;i++){
		for(;j>=1&&j>i;){
			if(i==j)break;
			if(a[i]==a[j]){
				if(b[i]!=b[j])ans+=a[i];
				i++,j--;
			}
			if(a[i]>a[j]){
				if(b[i]!=b[j])ans+=a[j];
				a[i]-=a[j];
				j--;
			}
			if(a[i]<a[j]){
				if(b[i]!=b[j])ans+=a[i];
				a[j]-=a[i];
				i++;
			}
		}
	}
	cout<<ans;
	return 0;
}
	
