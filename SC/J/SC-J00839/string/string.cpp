#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
struct Node{
	int number;
	char zimu;
}arr[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int T;
	cin>>T;
	for(int i=1;i<=T;i++){
		cin>>arr[i].number;
		cin>>arr[i].zimu;
	}
	int temp = arr[1].number;
	int MOD=1;
	
	for(int i=1;i<=T;i++){
		int k = arr[i].number;
		MOD = __gcd(temp,k);
		temp =MOD;
	}
	for(int i=1;i<=T;i++){
		arr[i].number/=MOD;
	}
	int n=0;
	string k="";
	for(int i=1;i<=T;i++){	
		for(int j=1;j<=arr[i].number;j++){
		 k+=arr[i].zimu;
		}
	}
	int ans=0;
	int endd=k.length()-1;
	for(int i=0;i<=endd/2;i++){
		if(k[i] != k[endd-i]) ans++;
	}
	cout<<ans*MOD;
	return 0;
} 