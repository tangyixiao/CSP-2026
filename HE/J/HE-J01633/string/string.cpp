#include<iostream>
#include<cstring>
using namespace std;
struct hui{
	int num;
	char le;
}a[10000000001]; 
int main(){
    ifstream("string.in");
	outstream("string.out"); 
	int n;
	fin>>n;
	string S;
	for(int i=0;i<n;i++){
		fin>>a[i].num>>a[i].le;
		for(int j=0;j<a[i].num;j++){
			S+=a[i].le;
		}
	}
	long long sum=S.length();
	int c=0,cn=0;
	for(int i=sum-1;i>sum/2-1;i--){
		if(S[c]!=S[i]){
			cn++;
		}
		c++;
	}
	fout<<cn;
	ifstream.close();
	outstream.close();
	return 0;
}
