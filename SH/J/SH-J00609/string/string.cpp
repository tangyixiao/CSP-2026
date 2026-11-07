#include<bits/stdc++.h>
using namespace std;
long long a,b,k=0,ans;
string c,d;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>b>>c;
		for(int j=1;j<=b;j++)d+=c;
		k+=b;
	}
	for(int i=1;i<=k;i++){
		if(d[i]=!d[k-i])ans++;
	}
	cout<<ans/2;
	return 0;
}
