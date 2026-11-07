#include<bits/stdc++.h>
using namespace std;
long long L,a[200009],j,k,ans,n;
char c[200009];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>L;
	for(int i=0;i<L;i++){
		cin>>a[i]>>c[i];
		n+=a[i];
	}
	k=L-1;
	for(int i=0;i<n/2;i++){
		if(a[j]=0)j++;
		if(a[k]=0)k--;
		if(c[j]!=c[k])ans++;
		a[j]--,a[k]--;
	}
	cout<<ans<<endl;
	return 0;
}
