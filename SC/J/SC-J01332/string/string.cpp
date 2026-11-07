#include<bits/stdc++.h>
using namespace std;
int a[200005],n,k=0;
string s;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++){
			s[k+j]=c[i];
		}
		k+=a[i];
	}
	int l=1,r=k,ans=0;
	while(l<r){
		if(s[l]!=s[r])ans++;
		l++;
		r--;
	}
	cout<<ans;
	
	return 0;
}