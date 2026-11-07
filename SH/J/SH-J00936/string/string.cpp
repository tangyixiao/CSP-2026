#include<bits/stdc++.h>
using namespace std;
//long long a[200050];
//char c[200050];
char str[1000000050];
int main(){
	//freopen("string.in","r","stdin");
	//freopen("string.out","w","stdout");
	long long n,ans=0,f=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int i=0;i<a;i++){
			str[i]=c;
			f++;
		}
	}
	 for(int i=1;i<=f;i++){
		
		if(str[i]==str[f-i])ans++;
	}cout<<ans;
	return 0;
} 
