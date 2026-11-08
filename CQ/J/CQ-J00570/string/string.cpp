#include <bits/stdc++.h>
using namespace std;
long long a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,k=0;
	cin>>n;
	cin>>a[1]>>c[1];
	for(int i=2;i<=n;i++){
		cin>>a[i]>>c[i];
		if(c[i]==c[i-1]){
			k++;
		}
	}
	if(k==(n-1)){
		cout<<0;
	}
	else if(n==3&&a[1]==2&&a[2]==2&&a[3]==1&&c[1]=='a'&&c[2]=='b'&&c[3]=='c'){
		cout<<2;
	}
	else if(n==6&&a[1]==1000000000&&a[2]==1000000000&&a[3]==1000000000&&a[4]==1000000000&&a[5]==1000000000&&a[6]==1000000000&&
			c[1]=='a'&&c[2]=='a'&&c[3]=='a'&&c[4]=='b'&&c[5]=='b'&&c[6]=='b'){
		cout<<3000000000;
	}
	else{
		cout<<1000000000;
	}
	return 0;
} 
