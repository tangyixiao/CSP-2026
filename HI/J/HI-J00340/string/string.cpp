#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in",r,stdin);
	freopen("string.out",w,stdout);
int n,a,z=0,cs=0;
string c,s=""; 
cin>>n;
for(int i=0;i<n;i++){
	cin>>a>>c;
	for(int j=0;j<a;j++){
		s=s+c;
	}
}
z=s.size();
for(int i=0;i<z/2;i++){
	if(s[i] != s[z-i-1]) cs++;
continue;
}
cout<<cs;
return 0;}
