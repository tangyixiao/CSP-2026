#include <iostream>
#include <algorithm>
using namespace std;
string m,p;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,mm,sum=0,g=0;
	char cc;
	cin>> n;
	for(long long i=1;i<=n;i++){
		cin >> mm;
		cin >> cc;
		for(long long j=1;j<=mm;j++){
			m+=cc;
		}
	}
	for(long long i=0;i<m.size()/2;i++){
	    if(m[i]!=m[m.size()-i-1]){
	   		sum++;
	   	}
   	}
	cout<<sum;
	return 0;
}