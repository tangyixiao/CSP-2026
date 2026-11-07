#include<bits/stdc++.h>
using namespace std;
int n;
char a[1000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n*2;i++)cin>>a[i];
	for(int j=1;j<=n;j++){
		if(a[j+1]==a[j-1]){
			cout<<0;
		}
		else cout<<1;
	}
return 0;
}
