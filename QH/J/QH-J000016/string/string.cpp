#include <bits/stdc++.h>
using namespace std;
int n=20000;
int main(){
	freopen("string.in","r",stdin)
	freopen("string.out","w",stdout)
long long s,f,a;
int b[n];
string c[n];
string d;
cin>>a;
for(int i=0;i<a;i++){
	cin>>b[i]>>c[i];
	f+=b[i];
	for(int j=0;j<b[i];j++)
	d+=c[i];
}
f--;
s=f/2; 
cout<<s;
	fclose(stdin)
	fclose(stdout)
return 0;
}
