#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int mi=INT_MAX;
	for(int i=0;i<n;i++){
		long long a;
		string b;
		cin>>a>>b; 
		if(mi>a){
			mi=a;
		}
	}
	cout<<a;
	return 0;
}
