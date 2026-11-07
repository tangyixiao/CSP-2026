#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
long long n;
cin>>n;
long long a[n+10];
char c[n+10];
for(int i=0;i<n;i++){
	cin>>a[i]>>c[i];
}
long long s;
for(int i=0;i<n;i++){
	for(int j=n;j>0;j--)
	if(c[i]==c[i++]){
		s=0;
	}
	else if(a[i]==a[j]&&c[i]==c[j]){
		s=0;
	}
}
cout<<s;
	return 0;
}
