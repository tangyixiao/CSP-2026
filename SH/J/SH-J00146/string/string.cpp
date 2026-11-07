#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string s="";
	for(int i=0;i<n;i++){
		int num;
		string letter;
		cin>>num>>letter;
		for(int i=0;i<num;i++){
			s+=letter;
		}
	}
	long long sum=0;
	long long length=s.size();
	long long l=0,r=length-1;
	while(r-l>1){
		if(s[l]!=s[r])sum++;
		l++;
		r--;
	}
	cout<<sum;
	return 0;
}
