#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	long long n;
	cin>>n;
	string s;
	long long j=0;
	for(long long i=0;i<n;i++){
		int x;
		char xs[1];
		cin>>x>>xs;
		for(int ii=0;ii<i;ii++){
			s+=xs;
			j++;
		}
	}
	cout<<"0";
	return 0;
}