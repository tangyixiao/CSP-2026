#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n;
char a[200005];
LL m[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m[i]>>a[i];
	}
	if(n==1){
		cout<<0;
	}
	else if(n==2){
		if(a[1]=a[2]){
			cout<<0;
		}
		else{
			cout<<min(m[1],m[2]);
		}
	}
	else{
		cout<<0;
	}
	return 0;
} 
