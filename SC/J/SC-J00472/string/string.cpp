#include<bits/stdc++.h>
using namespace std;
long long n,a,s=0,len=0;
char c;
string str,l,r;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>c;
		len+=a;
		for(int j=0;j<a;j++){
			str+=c;
		}
	}
	for(int i=0;i<len/2;i++){
		l+=str[i];
	}
	for(int i=len-1;i>len/2;i--){
		r+=str[i];
	}
	for(int i=0;i<len/2;i++){
		if(l[i]!=r[i]){
			s++;
		}
	}
	cout<<s;
	return 0;
}