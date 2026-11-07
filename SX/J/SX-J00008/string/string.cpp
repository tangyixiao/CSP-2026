#include<bits/stdc++.h>
using namespace std;
int n,w,sum;
char s[1800000];
void shi(char c[]){
	for(int i=1;i<=w/2+1;i++){
		if(s[i]!=s[w-i+1]){
			sum++;
			s[i]=s[w-i+1];
		}
	}
}
int main (){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int a,j=w;
		char q;cin>>a>>q;
		while(a--){
			j++;
			s[j]=q;
		}
		w=j;
	}
	shi(s);
	cout<<sum;
	return 0;
}