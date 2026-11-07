#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string input="";
	int n;
	cin >> n;
	long long a;
	char charact;
	long long last=0;
	for(int i=0;i<n;i++){
		cin >> a;
		last+=a;
		cin >> charact;
		for(int j=0;j<a;j++){
			input+=charact;
		}
	}
	last--;
	long long cha=0;
	for(int i=0;i<=last;i++){
		if(input[i]!=input[last]){
			cha++;
		}
		last--;
	}
	cout << cha;
	return 0;
}