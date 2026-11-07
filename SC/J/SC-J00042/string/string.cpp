#include<bits/stdc++.h>
using namespace std;
string s,d;
long long q;
int w=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a;
	char b;
	int j=0;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		while(a--){
			j++;
			s[j]=b;
			
		}
	}
	for(int i=0,k=s.size()-1;i<=j&&k>=0;i++,k--){
		if(s[i]!=s[k]){
			w++;
		}
		cout<<k;
	}
	if(w==0){
		cout<<0;
		return 0; 
	}
	cout<<(w+1)/2;
	return 0;
}