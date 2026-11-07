#include<bits/stdc++.h>
using namespace std;
long long a[200006];
int n;
char s[200006];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i){
		scanf("%lld",&a[i]);
		cin>>s[i];
	}
	bool o=1;
	int l=0,p=0;
	for(int i=2;i<=n;++i){
		if(s[i]==s[i-1]){
			o=1;
		}
		else{
			o=0;
			break;
		}
	}
	if(o){
		cout<<0;
		return 0;
	}
	for(int i=2;i<=n;++i){
		if(a[i]%2==0){
			l++;
		}
		else
		p++;
	}
	if((l+p)%2==0){
		;
	}
	return 0;
} 