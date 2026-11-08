#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a[n];
	string c,s;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	int L=s.size();
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s[j]=c[i];
		}
	}
	if(s==c){
		cout<<0;
		return 0;
	}
	int cnt=0;
	for(int i=L;i>=1;i--){
		int j=1;
		if(s[i]!=s[j]){
			cnt++;
		}
		j++;
	}
	cout<<cnt;
	cout<<s;
	return 0;
}//Hello,I`m HI-J00635.I`m 12,learn in NO.14 Junior high,11 class.
