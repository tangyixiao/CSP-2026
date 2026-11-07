#include<iostream>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a,b,d, e, f;
	char c;
	string s;
	cin>>n;
	b=1;
	d=0;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s[b]=c;
			b+=1;
		}
	}
	b-=1;
	e=1;
	f=b;
	for(int i=1;i<=b/2+b%2;i++){
		if(s[e]!=s[f]){
			s[e]=s[f];
			d+=1;
		}
		e+=1;
		f-=1;
	}
	cout<<d;
	return 0;
}
