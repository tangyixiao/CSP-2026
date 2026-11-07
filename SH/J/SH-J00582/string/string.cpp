#include<bits/stdc++.h>
using namespace std;
char c[200001];
long long l,ans=0,i=0,n,a[200001],j,k;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(;i<n;i++){
		cin>>a[i]>>c[i];
		l+=a[i];
	}
	j=a[0];
	k=1;
	for(i=0;i<l;i++){
		if(j==0){
			j=a[k];
			k++;
		}
		s[i]=c[k];
		j--;
	}
	for(i=0;i<l/2;i++){
		if(s[i]!=s[l-i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 
