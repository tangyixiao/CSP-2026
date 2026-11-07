#include<bits/stdc++.h>
using namespace std;
long long n,sum(0),cnt(0);
long long a[210000];
char s[210000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (long long i=1;i<=n;i++){
		cin>>a[i]>>s[i];
		sum+=a[i];
	}
	for (long long i=1,j=n;i<=j;){
		if (a[i]==a[j]){
			if (s[i]!=s[j]){
				cnt+=a[i];
			}
			i++;j--;
		}
		else if (a[i]<a[j]){
			if (s[i]!=s[j]){
				cnt+=a[i];
			}
			a[j]-=a[i];
			i++;
		}
		else{
			if (s[i]!=s[j]){
				cnt+=a[j];
			}
			a[i]-=a[j];
			j--;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
