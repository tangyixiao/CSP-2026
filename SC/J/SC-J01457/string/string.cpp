#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream fin("string.in");
	ofstream fout("string.out");
	int n;
	long long a;
	char c;
	fin>>n;
	string s;
	long long cnt=0;
	long long sum=0;
	for (int i=1;i<=n;i++){
		cin>>a>>c;
		for (long long j=1;j<=a;j++){
			s+=c;
		}
		sum+=a;
	}
	for (long long i=0;i<=(sum-1)/2;i++){
		if(s[i] != s[sum-i-1]){
			cnt++;
		}
	}
	fout<<cnt<<" "; 
	fin.close();
	fout.close();
	return 0;
}
