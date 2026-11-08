#include<bits/stdc++.h>
using namespace std;
string s;
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long a[n];
	char t,c[n];
	long long l=0;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		string te(a[i],c[i]);
		s+=te;
		l+=a[i];
	}
	
	for(int i=0;i<l/2;i++){
		if(s[l-1-i]!=s[i])ans++;
		else{
			break;
		}
	}
	cout<<ans;
	return 0;
}
