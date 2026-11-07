#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s;
	long long m=0;
	for(int i=0;i<n;i++){
		int a;
		char c;
		cin>>a>>c;
		m+=a;
		for(int j=0;j<a;j++){
			s+=c;
		}
	}
	long long l=0;
	long long r=m-1;
	long long cnt=0;
	while(l!=r){
		if(s[l]!=s[r]){
			cnt++;
		}
		l++;
		r--;
	}
	cout<<cnt<<endl;
	return 0;
}
