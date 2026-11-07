#include <bits/stdc++.h>
using namespace std;
long long n,ans,q=10000,qf=0;
long long a[200005],qa[200005];
char c[200005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(a[i]>99999999){
			qa[i]=a[i];
			a[i]%=q;
			qf=1;
		}
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	int len=(s.size()+1)/2;
	for(int i=0,j=s.size()-1;i<=len,j>=len;i++,j--){
		if(s[i]!=s[j]){
			ans++;
		}
	}
	if(qf){
		ans=0;
		for(int i=1;i<=n;i++){
			if(qa[i]){
				ans+=qa[i];
			}
		}
		return 0;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
