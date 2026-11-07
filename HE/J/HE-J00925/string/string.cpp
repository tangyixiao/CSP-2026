#include<bits/stdc++.h>
using namespace std;
int n;
long long a,x=1,s=0;
char c,l[1000000000];
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>c;
		for(int j=0;j<a;j++){
			l[x+j]=c;
		}
		x+=a;
	}
	x-=1;
	for(long long i=1;i<=x/2;i++){
		if(l[i]!=l[x+1-i]){
			s++;
		}
	}
	cout<<s;
	return 0;
}
