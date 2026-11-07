#include<bits/stdc++.h> 
using namespace std;
long long n,m,js;
long long a[60000000];
long long b[60000000];
string s; 
bool cheak(int x,int y){
	for(long long i=0;i<x;i++){
		if(s[i]==char(y+48)){
			js=i;
			return 1;
		}
	}
	return 0;
}
void qq(long long js){
	for(long long i=js;i<s.size();i++){
		s[i]='0';
	}
	return;
}
int main(){
	cin>>n>>m;
	for (long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for (long long i=1;i<=n;i++){
		s="0";
		for (long long j=i;j<=n;j++){
			if(cheak(j,a[j])==1){
				qq(js);
			}
			s+=char(a[j]+48);
		}
		for (long long i=1;i<s.size();i++){
			b[int(s[i])-48]+=1;
		}
	}
	for (long long i=1;i<=m;i++){
		cout<<b[i]<<' ';
	}
	return 0;
}