#include<bits/stdc++.h>
using namespace std;
long long s,a,d,e;
char b;
string c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>s;
	for(int i=1;i<=s;i++){
		cin>>a>>b;
		for(int j=1;j<=a;j++){
			d++;
			c[d]=b;
		}
	}
	for(int i=1;i<=d;i++){
		if(c[i]!=c[d-i+1]){
			c[d-i+1]=c[i];
			e++;
		}
	}
	cout<<e;
	return 0;
} 
