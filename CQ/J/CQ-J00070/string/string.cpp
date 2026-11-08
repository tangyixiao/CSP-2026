#include<bits/stdc++.h> 
using namespace std;
char s[200001];
long long n,m[2000008],q[26],p,o[26],w,l;
int main(){
	freopen("string.in","r",stdin);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m[i]>>s[i];
		q[s[i]-'a']+=m[i];
		l+=m[i];
	}
	for(int i=0;i<26;i++){
		if(q[i]!=0){
			w++;
			o[i]=1;
		}
	}
	if(w>=2){
		p=-91;
		for(int i=1;i<=n;i++){
			if(o[i]!=0){
			p=max(q[i],p);
			}
		}
			cout<<l-p;
	}else{
		cout<<0;
	}
	freopen("string.out","w",stdout);
	return 0;
}
