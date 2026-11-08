#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],k=0,x=0; 
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=n;i++){
		if(c[i]==c[i+1]){
			k++;
		}
	}
	if(k==n-1){
		cout<<0;
	}else{
		for(int i=1;i<=n;i++){
			x+=a[i];
		}
	}
	cout<<x/2;
	return 0;
}

