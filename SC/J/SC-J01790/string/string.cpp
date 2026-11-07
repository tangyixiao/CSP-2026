#include<bits/stdc++.h>
using namespace std;
long long l,t,a[100000000],s;
char b;
string c;
int main(){
	freopen("string.in","r",stdin);
	cin>>l;
	for(int i=0;i<l;i++){
		cin>>t>>b;
		for(int j=s;j<s+t;j++){
			c[j]=b;
		}
		s+=t;
	}
	t=0;
	for(int i=0;i<s/2;i++){
		if(c[i]!=c[l+1-i]){
			t++;
		}
	}
	cout<<t;
	
	freopen("string.out","w",stdout);
	return 0;
}
