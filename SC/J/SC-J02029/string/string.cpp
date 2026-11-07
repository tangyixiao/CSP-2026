#include<bits/stdc++.h>
using namespace std;
const long long N=1e5*2+5;
long long n,num[N],ans,l,r;
char s[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>num[i]>>s[i];
	}
	l=1,r=n;
	while(1){
		if(l==r) break;
		if(num[l]<=num[r]){
			if(s[l]!=s[r]) ans+=num[l];
			num[r]-=num[l];
			l++;
		}
		if(num[l]>num[r]){
			if(s[l]!=s[r]) ans+=num[r];
			num[l]-=num[r];
			r--;
		}
	}
	cout<<ans;
	return 0;
}