#include<bits/stdc++.h>
using namespace std;
int a,b[10005],c[10005],d;
int ans,cnt,bnd;
int main() {
	freopen("string.in","r",stdin);

	freopen("string.out","w",stdout);
	cin>>a;
for(int i=1;i<=a;i++){
	cin>>b[i]>>c[i];
}
for(int i=1;i<=a;i++){

	 if(c[i-d]!=c[d]&&b[i-d]==b[d]){bnd+=b[i-d];d++;}
	
	}
cout<<bnd;
}


	
	
		 



	

