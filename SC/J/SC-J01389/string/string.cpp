#include<bits/stdc++.h>
using namespace std;
vector<int> s; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,w=0,c;
	cin>>n;
	char b;
	for(int i=0;i<n;i++){
		cin>>c>>b;
		for(int j=0;j<c;j++){
			s.push_back(b);
		}
	}
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-1-i]){
			w++;
		}
	}
	cout<<w;
	return 0 ;
}