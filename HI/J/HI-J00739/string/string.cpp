#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a,n;
	cin>>n;
	char c;
	string s="";
	for(int i=0;i<n;i++){
		cin>>a;
		cin>>c;
		for(int j=0;j<a;j++)s+=c;
	}
	int f=0,d=s.size()-1;
	int cnt=0;
	while(f<d){
		if(s[f]!=s[d]){
			cnt++;
			
		}
		f++;
		d--;
	}
	cout<<cnt;
	
	
	
	return 0;
}
