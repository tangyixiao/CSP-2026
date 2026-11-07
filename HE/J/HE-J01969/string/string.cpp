#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cnt=0;
	cin>>n;
	string s;
	for(int i=0;i<n;i++){
		int m;
		cin>>m>>s[i];
	}
	for(int i=0;i<s.size();i++){
		int p=i,q=s.size();
		if(p!=q){
			cnt++;
		}
		q--;
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
