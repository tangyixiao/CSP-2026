#include<bits/stdc++.h>
using namespace std;
long long n,m,num;
char s;
int ok=0;
string l;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>m>>s;
		for(int j=1;j<=m;j++){
			l+=s;
		}
	} 
	for(long long i=0;i<l.length()/2;i++){
		if(l[i]!=l[l.length()-1-i]){
			ok=1;
			num++;
		}
	}
	if(ok==0){
		cout<<0;
	}
	else cout<<num;
	return 0;
}