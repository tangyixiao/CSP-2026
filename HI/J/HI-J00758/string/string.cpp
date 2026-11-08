#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("trave.in","r",stdin);
freopen("treve.out","w",stdout);
long long q,x,c=0,num=0;
string s[100000],d[100000];
char a,b;
cin>>q;
for(long long i=0;i<q;i++){
	cin>>x>>a;
	if(b==a and i+1==q){
		cout<<0;
		return 0;
	}
	b=a;
	
for(long long  j=0;i<x;j++){
	s[c++]=a;
	
}
}

for( int i=0;i<c;i++){
if(d[i]!=s[i]){
	num++;
	
}
c--;
}
cout<<num;
	return 0;
}
