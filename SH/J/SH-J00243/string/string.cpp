#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long a;
	cin>>a;
	vector<char> huiwen;
	
	for(int i=0;i<a;i++){
		long long b;
		char c;
		cin>>b>>c;
		for(long long j=0;j<b;j++){
			huiwen.push_back(c);
		
		}
	}
	long long cnt=0;
	long long j=huiwen.size()-1;
	for(long long i=0;i<huiwen.size()/2;i++){
		if(huiwen[i]!=huiwen[j]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}

