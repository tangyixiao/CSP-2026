#include<bits/stdc++.h>
using namespace std;
int n,a[200005],no=1,ans,ldy;
char b [200005],c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;++i){
		cin>>a[i]>>b[i];
		for (int j=no;j<no+a[i];j++){
			c[j]=b[i];
			ldy++;
		}
		no+=a[i];
	}
	int j=ldy;
	for (int i=1;i<=ldy;++i){
		if(c[i]!=c[j]){
			ans++;
			c[i]=c[j];
		}
		j--;
	}
	cout<<ans;
	
}
