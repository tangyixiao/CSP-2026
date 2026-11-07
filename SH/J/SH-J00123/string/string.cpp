#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	string s="";
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int i=1;i<=a;i++)s+=c;
	}
	int t=s.length(),g=0;
	if(t%2==0){
		int l=t/2-1,r=t/2;
		while(l>=0){
			if(s[l]==s[r]){
				l--;
				r++;
			}
			else{
				g++;
				s[r]=s[l];
				l--;
				r++;
			}
		}
	}
	else{
		int l=t/2-1,r=t/2+1;
		while(l>=0){
			if(s[l]==s[r]){
				l--;
				r++;
			}
			else{
				g++;
				s[r]=s[l];
				l--;
				r++;
			}
		}
	}
	cout<<g;
	return 0;
}
