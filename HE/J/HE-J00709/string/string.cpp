#include<bits/stdc++.h>
using namespace std;
string s,c[200006],p;
long long n,a[200006],b[200006],l,k,ans;

int main(){
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s;
		//b[n-i+1]=a[i];
	//	c[n-i+1]=s[i];
		k+=a[i];
		for(int j=1;j<=a[i];j++)
		p+=s;
	}
	for(int i=0;i<k/2;i++){
		if(p[i]!=p[k-i-1])
			ans++;
		
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);

	return 0;
}

