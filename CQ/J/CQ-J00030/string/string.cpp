#include<bits/stdc++.h> 
using namespace std;
long long  a,b=0;
string c="";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>a;
	for(int i=1;i<=a;i++){
		long long n;
		char m;
		cin>>n>>m;
		for(int j=0;j<n;j++){
			c+=m;
		} 
	}for(long long i=0;i<(c.size()-c.size()%2)/2;i++){
		if(c[c.size()-1-i]!=c[i]){
			b++;
		}
	}cout<<b; 
	return 0;
}
