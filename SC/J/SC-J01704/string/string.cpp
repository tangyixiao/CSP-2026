#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N],n;
long long ans=0;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i];
	int be=1,en=n;
	while(en>be){
		if(a[be]>a[en]){
			if(c[be]!=c[en])ans+=a[en];
			a[be]-=a[en--];
		}else if(a[be]<a[en]){
			if(c[be]!=c[en])ans+=a[be];
			a[en]-=a[be++];
		}else{
			if(c[be]!=c[en])ans+=a[be];
			be++,en--;
		}
	}
	cout<<ans;
	return 0;
}