#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,k,sum=0,ans=0,a=0;
	string s;
	char c;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> k>>c;
		for(int j=sum;j<=sum+k;j++){
			s[j] = c;
		}
		sum+=k;
	}
	for(int i=0;i<sum;i++){
		if(s[i]==s[i+1]){
			a++;
		}
	}
	if(a==sum){
		cout << "0";
	}

	return 0;
}