#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],sum;
char c[200005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	n--;
	for(int i=0;i<=n;++i){
		cin>>a[i]>>c[i];
		s+=c[i];
	}
	for(int i=0;i<=n;){
		if(a[i]==0)i++;
		if(a[n]==0)n--;
		if(i>=n){
			break;
		}
		if(s[i]!=s[n]){
			sum++;
		}
		a[i]--;
		a[n]--;
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
