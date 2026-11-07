#include<bits/stdc++.h>
using namespace std;
long long n,a,cnt,b;
string c[100000],s[100000]; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		cin>>c[i];
		cnt+=a;	
	}
	for(int i=1;i<=n;i++){
		s[i]=c[i];
		if(s[i]==c[i]){
			b++;
		}
	}
	if(b==n){
		cout<<0;
	}else{
		cout<<cnt/2;
	}
	return 0;
} 
