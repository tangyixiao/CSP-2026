#include<bits/stdc++.h>
using namespace std;
string s,l,r;
int n,c1,c2,c3;
int a;
char b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		for(int j=0;j<a;j++){
			s[c1]=b;
			c1++;
		}
	}
	int q=c1;
	if(q%2==0){
		for(int i=0;i<q/2;i++){
			l[i]=s[i];
		}
		for(int i=q-1;i>=q/2;i--){
			r[c2]=s[i];
			c2++;
		}
		for(int i=0;i<q/2;i++){
			if(l[i]!=r[i])c3++;
		}
	}
	else {
		c2=0;
		for(int i=0;i<q/2;i++){
			l[i]=s[i];
		}
		for(int i=q-1;i>=q/2+1;i--){
			r[c2]=s[i];
			c2++;
		}
		for(int i=0;i<q/2;i++){
			if(l[i]!=r[i])c3++;
		}
	}
	cout<<c3;
	return 0;
} 