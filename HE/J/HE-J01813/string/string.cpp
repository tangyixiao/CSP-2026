#include<bits/stdc++.h>
using namespace std;
long long n,a,b=0,m=1,l,r;
char s1[1000000009],s;
long long ans;
string h;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>s;
		for(int i=b;i<=m+a;i++){
			s1[i]=s;
		}
		m+=a;
		b+=a;
	}
	if(b%2==0){
		cout<<b/2;
		return 0;
	}else{
		l=1;
		r=b;
	}
	for(int i=1;i<=n;i++){
		if(s1[l]==s1[r]){
			l++;
			r--;
			continue;
		}else{
			ans++;
			l++;
			r--;
		}
		if(l==r){
			break;
		}
	}
	cout<<ans;
	return 0;
}
