#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,l=0,h=0;
	cin>>n;
	string s,s1;
	int a[200005];
	char c[200005];
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		l+=a[i];
		while(a[i]){
			a[i]--;
			s+=c[i];
		}
	}
	for(int i=1;i<=l;i++){
		s1[l-i]=s[i];
	}
	for(int i=1;i<=l/2;i++){
		if(s[i]!=s1[i]) h++;
	}
	cout<<h;
	return 0;
}
