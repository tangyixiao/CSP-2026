#include<bits/stdc++.h>
using namespace std;
int n,m;
string a,s;
int h(string c){
	int j=c.size()-1,t=0;
	for(int i=0;i!=j;i++){
		if(s[i]!=s[j]){
			t++;
		}
		j--;
	}
	return t;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m;
		cin>>a;
		while(m--){
			s+=a;
		}
	}
	cout<<h(s);
	return 0;
} 

