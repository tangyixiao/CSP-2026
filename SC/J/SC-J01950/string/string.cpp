#include<bits/stdc++.h>
using namespace std;
string sum;
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	long long num;
	cin>>num;
	while(num--){
		long long n;
		char m;
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			sum+=m;
		}
	}
	long long num1=0;
	for(int i=0,j=sum.size()-1;i<=j;i++,j--){
		if(sum[i]!=sum[j])num1++;
	}
	cout<<num1;
	return 0;
}