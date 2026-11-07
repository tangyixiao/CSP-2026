#include<bits/stdc++.h>
using namespace std;
const int MAX=1e5;
int a[2*MAX+5];
string c[2*MAX+5];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	cin>>a[0]>>c[0];
	bool f=0;
	string s="",s1="";
	for(int i=1;i<n;i++){
		cin>>a[i]>>c[i];
		if(c[i]!=c[i-1]) f=1;
	}if(!f){//都为c，无需操作 
		cout<<0;return 0; 
	}
	for(int i=0;i<n;i++){
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	long long l=s.length()-1,sum=0;
	for(long long i=0;i<s.length();i++){
		s1[l]=s[i];l--;
	}for(long long i=0;i<s.length();i++){
		if(s[i]!=s1[i]) sum++;
	}cout<<sum/2;
	return 0;
}
