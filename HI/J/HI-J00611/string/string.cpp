#include<bits/stdc++.h>
using namespace std;
long long n,a,arr[200005],x=0,y=0,z=0,k=0;
char b;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>a>>b;
		for(int i=0;i<a;i++){
			s+=b;
		}
	}
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-1-i]){
			s[s.size()-1-i]=s[i];
			x++;
		}
	}
	cout<<x;
	return 0;
}
