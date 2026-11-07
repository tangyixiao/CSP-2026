#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+5;
long long n,a[N],ans;
char s[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
	}
	for(int i=1,j=n;i<j;){
		if(a[i]==a[j]){
			if(s[i]!=s[j]){
				ans+=a[i];
			}
			i++;
			j--;
			continue;
		}
		if(a[i]>a[j]){
			if(s[i]!=s[j]){
				ans+=a[j];
			}
			a[i]-=a[j];
			j--;
			continue;
		}
		if(a[i]<a[j]){
			if(s[i]!=s[j]){
				ans+=a[i];
			}
			a[j]-=a[i];
			i++;
			continue;
		}
	}
	cout<<ans;
	return 0;
}