#include<bits/stdc++.h>
using namespace std;
char a777[250000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	int n,xx,sum = 0,sum1,ans = 0;
	char sb,mid;
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>xx>>sb;
		sum1 = sum;
		for(int j = sum;j<sum1+xx;j++){
			a777[j] = sb;
			
		} 
		sum+=xx;
	}
	
	cout<<ans;
	return 0; 
} 
