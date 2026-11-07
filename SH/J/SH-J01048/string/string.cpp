#include <bits/stdc++.h>
using namespace std;
int n,s1,s2,e1,e2,ansleft=0,ansright=0;
string s,z;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++){
		int len;
		char a;
		cin>>len>>a;
		for (int i=1;i<=len;i++){
			s=s+a;
		}
	}
	z=s;
	reverse(s.begin(),s.end());
	if (z==s){
		cout<<0;
		return 0;
	}
	s1=0;
	e1=z.size()/2-1;
	e2=z.size()-1;
	if (z.size()%2==0){
		s2=e1+1;
	} 
	else {
		s2=e1+2;
	}
	for (int i=s1;i<=e1;i++){
		if (z[i]!=s[i]){
			ansleft++;
		}
	}
	for (int i=s2;i<=e2;i++){
		if (z[i]!=s[i]){
			ansright++;
		}
	}
	cout<<min(ansleft,ansright);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
