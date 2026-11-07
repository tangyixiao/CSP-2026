#include<bits/stdc++.h>
using namespace std;
string s="";
unsigned long long n,a;
unsigned long long sum=0;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(unsigned long long i=1;i<=n;i++){
		cin>>a>>c;
		while(a--)s+=c;
	}
	for(unsigned long long i=0,j=s.size()-1;i<j;i++,j--){
		if(s[i]!=s[j])sum++;
	}
	cout<<sum;
	return 0;
}
