#include<bits/stdc++.h>
using namespace std;
int n,x,l=0,ans=0;
char ch;
int a[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		cin>>ch;
		for(int j=1;j<=x;j++){
			a[l+j]=int(ch)-96;
		}
		l+=x;
	}
	for(int i=1;i<=l/2;i++){
		if(a[i]!=a[l+1-i]){
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
