#include<bits/stdc++.h>
using namespace std;
int n;
char c[200010];
string s;
long long a[200010],ans;
void solve2(){
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	ans=0;
	int i=1,j=n;
	while(i<=j){
		if(a[i]<a[j]){
			if(c[i]!=c[j]) ans+=a[i];
			a[j]-=a[i];
			i++;
		}
		else if(a[i]==a[j]){
			if(c[i]!=c[j]) ans+=a[i];
			i++;j--;
		}
		else{
			if(c[i]!=c[j]) ans+=a[j];
			a[i]=a[i]-a[j];
			j--;
		}
	}
	cout<<ans;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	solve2();
	return 0;
}
