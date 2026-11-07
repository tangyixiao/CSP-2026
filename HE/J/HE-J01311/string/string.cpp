#include<bits/stdc++.h>
using namespace std;
int n;
int l,r;
long long L;
string s;
string s1;
int a;
char c;
long long ans;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		L+=a;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	if(L%2==0){
		l=L/2-1;
		r=l+1;
	}
	else if(L%2==1){
		l=L/2;
		r=l;
	}
	while(true){
	//	cout<<l<<" "<<r<<endl;
		if(s[l]!=s[r]){
			ans++;
		}
		if(l==0&&r==L-1){
			break;
		}
		l--;
		r++;
	}
	cout<<ans;
	return 0;
}
