#include<bits/stdc++.h>
using namespace std;
int n;
string S;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		char c;
		cin>>a>>c;
		while(a--){
			S+=c;
		}
	}
	int m=0;
	for(int i=0;i<S.size();i++){
		if(S[i]!=S[S.size()-i]){
			S[S.size()-i]=S[i];
			m++; 
		}
	}
	cout<<m;
} 
