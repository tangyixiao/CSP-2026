#include <bits/stdc++.h> 
using namespace std;

int main(){
	int n,sum=0,ans=0;
	cin>>n;
	int a[n+5];
	char c;
	string s;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c;
		for(int j=0;j<a[i];j++){
			s+=c;
			sum++;
		}
	}
	int mid=sum/2;
	for(int i=0;i<mid;i++){
		if(s[i]!=s[sum-i-1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}