#include <bits/stdc++.h>
using namespace std;
string a;
char b;
long long n,m,sum;
int main(){
	freopen ("string.in","r",stdin);
	freopen ("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>m;
		cin>>b;
		for(int k=1;k<=m;k++){
			a+=b;
		}
	}
	int long_a=a.size();
	int right = long_a-1;
	int left = 0;
	while(left<right){
		if(a[left]==a[right]){
			
		}else{
			sum++;
		}
		left++;
		right--; 
	}
	cout<<sum;
	return 0;
}  
