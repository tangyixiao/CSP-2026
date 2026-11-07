#include<bits/stdc++.h>
using namespace std;
long long n,x;
long long a[200005];
char s[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
	}
	long long ans=0;
	for(int i=1,j=n;i<=n&&j>=1;){
		if(i>=j){
			break;
		}
		if(a[i]==a[j]){
			if(s[i]!=s[j]){
				ans+=a[i];
			}
			i++;
			j--;
			continue;
		}
		if(a[i]<a[j]){
			a[j]-=a[i];
			if(s[i]!=s[j]){
				ans+=a[i];
			}
			i++;
			continue;
		}
		if(a[i]>a[j]){
			a[i]-=a[j];
			if(s[i]!=s[j]){
				ans+=a[j];
			}
			j--;
			continue;
		}
	}
	cout<<ans;
	return 0;
}
