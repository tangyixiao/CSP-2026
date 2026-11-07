#include<bits/stdc++.h>
using namespace std;
long long n,a,cnt;
string s;
char b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.in","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		for(int j=0;j<a;j++){
			s+=b;
		}
		if(i==0)  cout<<a;
	}
              
	return 0;
}
