#include <bits/stdc++.h>
using namespace std;
int n;
long long ans,k=1,anss=0;
char s[20000010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(long long i=0;i<n;i++){
		long long a;
		char q;
		cin>>a>>q;
		ans+=a;
		for(long long j=k;j<=k+a;j++){
			s[j]=q;
		}
		k+=a;
	}
	for(long long i=1;i<=ans;i++){
		if(s[i]!=s[ans-i+1]){
			anss++;
			s[ans-i+1]=s[i];
		}
	}
	cout<<anss;
	return 0;
}
