#include<bits/stdc++.h>
using namespace std;
int n;
long long a,b;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>c;
		for(int j=b;j<b+a;j++)
			s[j]=c;
		b=b+a;
		   
	}
	
	int j=0;
	for(int i=0;i<b/2;i++){
		if(s[i]!=s[b-i-1])
		    j++;
	}
	cout<<j;
	freopen("string.out","w",stdout);
	
	return 0;
}