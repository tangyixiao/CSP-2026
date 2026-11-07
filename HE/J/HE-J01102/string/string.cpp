#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[30000000000];
char b[600000000000];
char c[30000000];
long long f=1;
long long g;
int main(){
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
cin>>n;
for(int i=1;i<=n;i++){
	cin>>a[i];
	cin>>c[i];
	for(int j=1;j<=a[i];j++){
		b[f]=c[i];
		f++;
	}
}

for(int i=1;i<=f/2;i++){
	if(b[i]!=b[f+1-i]){
		g++;
	}
}
cout<<g;
return 0;
}
