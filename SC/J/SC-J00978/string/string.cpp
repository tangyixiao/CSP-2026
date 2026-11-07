#include<bits/stdc++.h>
using namespace std;
int n,a,cnt,l;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		l+=a;
		for(int i=1;i<=a;i++){
			s+=c;
		}
	}
	for(int i=0;i<=l/2;i++){
		if(s[i]!=s[l-1-i]){
			s[l-1-i]=s[i];
			cnt++;
		}
	}
	cout<<cnt<<endl;
}