#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int n,a;
long long ans=0;
char c;
string S;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a >> c;
		for(int j=1;j<=a;j++){
			S+=c;
		}
	}
	for(int i=0;i<S.size()/2;i++){
		if(S[i]!=S[S.size()-1-i]){
			ans++;
		}
	}
	cout << ans;
	return 0;
}
