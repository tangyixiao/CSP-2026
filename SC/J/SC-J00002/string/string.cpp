#include<bits/stdc++.h>
using namespace std;
const long long N=2e5;
long long n,a,sum=0,k=0;
string s;
char b;
int main(){
//	fropen("string.in","r","stdin");
//	fropen("string.out","w","stdout");
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>a>>b;
    	k+=a;
    	for(int j=1;j<=a;j++){
    		s=s+b;
		}
	}
	for(int i=0;i<k/2;i++){
		if(s[i]!=s[k-1-i]) sum++;
	}
	cout<<sum;
	return 0;
}