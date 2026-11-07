#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
char s[200005];
int main(){
	freopen("string.in","r",stdin);
 	freopen("string.out","w",stdout);
 	cin >> n;
 	for(int i=0;i<n;i++){
 		cin >>a[i] >> s[i]	;
	}
	char j[200005]={'0'};
	
	for(int i=0;i<n;i++){
		j[i]=s[i];
	}
	bool p=1;
	int cnt=0;
	for(int i=0;i<n;i++){
		if(j[i]!=j[n-i]){
			cnt++;
		}
	}
	if(p!=0){
		cout << 0;
	}
	else{
		cout << cnt;
	}
	return 0;
}