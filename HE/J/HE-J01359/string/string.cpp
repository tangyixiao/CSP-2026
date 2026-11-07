#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
	long long n;
	cin>>n;
	string a1[100000];
	unsigned long long sum=0,s=0;
	while(n--){
		long long a;
		char a2;
		cin>>a>>a2;
		while(a--){
			a1[sum]=a2;
			sum++;
		} 
	}
	for(long long i=0;i<sqrt(sum);i++){
		if(a1[i]!=a1[sum-1]){
			s++;	
		}
		sum--;
	}
	cout<<s;
	return 0;
}
