#include <bits/stdc++.h>
using namespace std;
int n;
string gnirts(char s,int l){
	string ns=""; 
	for (int i=0;i<l;i++){
		ns+=s[l-i-1];
	}
	return ns;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	char c[n+1];
	int a[n+1],l=0;
	string s;
	for (int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		l+=a[i];
		s+=c[i];
	}
	if (s==gnirts(s)){
		cout<<0;
		return 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
