#include<bits/stdc++.h>
using namespace std;
int n;
string s="";
int check(int len1){
	long long num=0;
	for(long i=0;i<len1/2;i++)
	{
		if(s[i] != s[len1-i-1])
		{
			num++;		
		}
	}
	return num;	
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int k;
		string l;
		cin>>k>>l;
		while(k--) s+=l;
	}
	long long t=s.size();
	cout<<check(t);	
	return 0;
}