#include<bits/stdc++.h>
using namespace std;
string S[100001];
int n;
int p;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> S[i];
	}
	for(int i=1;i<=n;i++){
		if(S[i]!=S[i]){
			p++;
			cout << p;
		}else if(S[i]==S[i]){
			cout << 0;
		}
	}
	return 0;
}
