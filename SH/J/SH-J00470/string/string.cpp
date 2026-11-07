#include<bits/stdc++.h> 
using namespace std;
int n;
int N=200009,num;
string l,v;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num;
		cin>>v;
		for(int j=0;j<num;j++)l+=v;
	}
	long long s=l.size(),ans;
	for(int i=0;i<s/2;i++){
		if(!(l[i]==l[s-i-1]))ans++;
	}
	cout<<ans;
	return 0;
}
