#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,s[100010],h=0,c;
	char w[100010],a[100010];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i];
		cin>>a[i];
	}
	
	if(n==1){
		cout<<"0";
		return 0;
	} 
	if(n==2){
		if(a[1]==a[2]) cout<<"0";
		if(a[1]!=a[2]) cout<<min(s[1],s[2]);
		return 0;
	}for(int i=1;i<=n;i++){
		h=h+s[i];
		for(int j=1;j<=s[i];j++){
			w[j]=s[i];
		}
	}
	c=h/2;
	for(int i=1;i<=c;i++){
		if(w[i]==w[c-i+1]) c=c-1;
	}
	cout<<c;
	return 0;
}