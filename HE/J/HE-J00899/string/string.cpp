#include<bits/stdc++.h>
using namespace std;
string s,t;
char b[100005];
int n,j=0,cnt=0;
int a[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	} 
	for(int i=1;i<=n;i++){
		j+=a[i];
		while(a[i]>0){
			s=s+b[i];
			a[i]--;
		}
	}
	while(j>=0){
		t+=s[j];
		j--;
	}
	for(int i=1;i<=s.size();i++){
		if(t[i]==s[i]){
		s.erase(i);
		t.erase(i);
	}
	}
	
	if(s.empty()){
		cout<<0;
	}
	else{
	cout<<t.size();
	}
	return 0;
}

