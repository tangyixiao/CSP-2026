#include<bits/stdc++.h>
using namespace std;
struct node{
	int a;
	char c;
}s[210000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	long long num=0,k=0,ans=0;
	string l="";
	bool f=true,ff=true;
	for(int i=1;i<=n;i++){
		cin>>s[i].a>>s[i].c;
		if(i>=2&&s[i].c!=s[i-1].c) f=false;
		if(s[i].a!=s[i-1].a&&i>=2) ff=false;
	}
	if(f==true||n<=1){
		cout<<0;
		return 0;
	}
	if(ff==true){
		for(int i=1;i<=n/2;i++) if(s[i].c!=s[n-i+1].c) num+=s[i].a;
		cout<<num;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=s[i].a;j++){
			l[k]=s[i].c;
			k++;
		}
		ans+=s[i].a;
	}
	for(int i=1;i<=ans/2;i++){
		if(l[i]!=l[ans-i+1]) num++;
	}
	cout<<num;
	return 0;
}
