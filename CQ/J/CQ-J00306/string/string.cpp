#include<bits/stdc++.h>
using namespace std;
int n,a[200001],sum=0,ans=0;
char c[200001],s[1000000001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=0;j<=a[i];j++){
			s[++sum]+=c[i];
		}
	}
	for(int i=1,j=sum;i<(sum/2)+1,j>(sum/2);i++,j--){
		if(s[i]!=s[j]){
			ans=ans+1;
		}
	}
	cout<<ans;
	return 0;
}
