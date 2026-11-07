#include<bits/stdc++.h>
using namespace std;
int a;
string c;
string s;
string hf;
	
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>c;
		for(int j=0;j<a;j++){
			s+=c;
		}
	}
	for(int i=s.size()-1;i>=0;i--){
		hf+=s[i];
	}
	int sum=0;
	for(int i=0;i<n;i++){
		if(s[i]!=hf[i]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
} 
