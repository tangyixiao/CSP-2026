#include<bits/stdc++.h>
using namespace std;
string s;
int n,a,cnt,rn;
char q;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>q;
		for(int j=0;j<a;j++){
			s+=q;
		} 
		rn+=a;
	} 
	string s1=s;
	int l=0,r=s.size()-1;
	while(l<=r){
		if(s[l]!=s1[r]){
			cnt++;
		}
		l++;
		r--;
	}
	cout<<cnt;
	return 0;
}
