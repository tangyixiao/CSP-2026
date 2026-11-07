#include<bits/stdc++.h>
using namespace std;
const int N=200005;
int a[N];
char b[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,x;
	bool f=1;
	string s="",c="";
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		for(int j=1;j<=a[i];j++){
			s+=b[i];
		}
	}
	c=s;
	x=s.size()-1;
	for(int i=0;i<s.size();i++){
		if(s[i]!=c[x]){
			f=0;
			break;
		}
		if(x==i){
			break;
		}
		x--;
	}
	if(f==1){
		cout<<0;
	}
	else{
		cout<<s.size()/2;
	}
	fclose(stdin);
	fclose(stdout);

	return 0;
}

