#include<bits/stdc++.h>
using namespace std;
int n,a,sum=1,num=0,l;
char r,x;
char s[20000000001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>r;
		for(int j=1;j<=a;j++){
	       s[i]=r;
	}l=strlen(s);
	}if(l%2==1){
	 for(int i=1;i<=l/2+1;i++){
		if(s[i]==s[l-i+1]){
			sum=1;
		}else{
			sum=0;
		}if(sum==0){
			s[l-i+1]=s[i];
			num++; 
		}
	}
	}if(l%2==0){
	 for(int i=1;i<=l/2;i++){
		if(s[i]==s[l-i+1]){
			sum=1;
		}else{
			sum=0;
		}if(sum==0){
			s[l-i+1]=s[i];
			num++; 
		}
	}
	}
	cout<<num;
	return 0;
}