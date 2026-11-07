#include<bits/stdc++.h>
using namespace std;
int n,x,cnt=0;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>c;
		for(int j=0;j<x;j++){
			s+=c;
		}
	}
	int m=s.size();
	for(int i=0;i<m;i++){
		if(s[i]!=s[m-1-i]){
			s[m-1-i]=s[i];
			cnt++;
			}
	}
	cout<<cnt;
	return 0;
	fclose(stdin);
	fclose(stdout);
}
