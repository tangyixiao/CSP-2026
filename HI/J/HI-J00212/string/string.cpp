#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long sum1=0;
	string s;
	long long a,n;
	string c;
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>c>>a;
		for(int j=1;j<=a;j++){
			s=s+c;
		}
		
	}
	int l=0,r=s.size()-1;
	while(l!=r){
		if(s[l]!=s[r]){
			sum1++;
		}
		l++,r--;
	}
	cout<<sum1;
	return 0; 
}
