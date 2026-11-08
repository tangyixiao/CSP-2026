#include <bits/stdc++.h> 
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int b,d;
	int n;
	string s,s1;
	cin>>n;
	while(n--){
		int a;
		char c;
		cin>>a>>c;
		for(int i=1;i<=a;i++){
			s+=c;
		}
	}
	int l=s.size();
	for(int i=0;i<l;i++){
		s1[i]=s[l-1];
	}
	for(int i=0;i<l;i++){
		if(s[i]==s1[i])
			d++;
	}
	if(l==d)
		cout<<0;
	else
		cout<<l/2+1-d;
	return 0;
}
