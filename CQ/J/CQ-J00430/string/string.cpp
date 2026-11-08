#include<bits/stdc++.h>
using namespace std;
long long n,a[2009],lenn,s[2009],cnt=0;
char z[2009],k[110100];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>z[i];
		s[i]=s[i-1]+a[i];
		lenn+=a[i];
	}for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			k[s[i-1]+j]=z[i];
		}
	}
//	for(int i=1;i<=lenn;i++){
//		cout<<k[i];
//	}cout<<endl;
	for(int i=1;i<=lenn/2;i++){
		if(k[i]!=k[lenn-i+1]){
			cnt++;
		}
	}cout<<cnt;

	
	return 0;
	
}
