#include <bits/stdc++.h>
using namespace std;

string s="",x="";
long long n=0,m=0,r=0,cnt=0;

int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);

	cin>>n;
	for (int i=0;i<n;i++){
		cin>>m>>x;
		for (int j=0;j<m;j++){
			s+=x;
		}
	}
	r=s.size()-1;
	for (int i=0;i<r/2;i++){
		if (s[i]!=s[r-i]){
			cnt++;
		}
	}
	cout<<cnt;
    return 0;
}
