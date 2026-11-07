#include<bits/stdc++.h>
using namespace std;
long long l,n,ans;
string a,n1,n2;
int main(){
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
cin>>n;
for(int i=1;i<=n;i++){
	int a1;
	char b;
	cin>>a1>>b;
	for(int i=l+1;i<=l+a1;i++){
		a+=b;
	}l+=a1;
}if(l%2==1){
	for(int i=1;i<=l/2;i++){
		n1+=a[i-1]; 
	}for(int i=l;i>l/2+1;i--){
		n2+=a[i-1];
	}for(int i=0;i<l/2;i++){
		if(n1[i]!=n2[i]){
			ans++;
		}
	}
}if(l%2==0){
	for(int i=1;i<=l/2;i++){
		n1+=a[i-1]; 
	}for(int i=l;i>l/2;i--){
		n2+=a[i-1];
	}for(int i=0;i<l/2;i++){
		if(n1[i]!=n2[i]){
			ans++;
		}
	}
}cout<<ans;
return 0;
}
