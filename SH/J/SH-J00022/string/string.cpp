#include <bits/stdc++.h>
using namespace std;
int n,a[200010];
long long cnt;
char s[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cnt=0;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i]>>s[i];
	}
	for(int i=0,j=n-1;i<j;){
		if(s[i]!=s[j]){
			cnt+=min(a[i],a[j]);
		}
		if(a[i]==a[j]){
			i++;
			j--;
		}else if(a[i]>a[j]){
			a[i]-=a[j];
			j--;
		}else if(a[i]<a[j]){
			a[j]-=a[i];
			i++;
		}
	}
	cout<<cnt;
	return 0;
}
