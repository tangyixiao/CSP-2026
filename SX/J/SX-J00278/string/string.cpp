#include<bits/stdc++.h>
using namespace std;
int n,a[200005],l=0,cnt=0;
string s;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		l+=a[i];
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	for(int i=1;i<=l;i++){
		if(s[i]!=s[l+1-i]){
		    cnt++;
		}
	}
	cout<<cnt/2;
	return 0;
}