#include<bits/stdc++.h>
using namespace std;
char c;
string S;
long long a,sum=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			S+=c;
		}
	}
	for(int i=0;2*i<=S.size();i++){
		if(S[i]!=S[S.size()-1-i]){
			S[S.size()-1-i]=S[i];
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
