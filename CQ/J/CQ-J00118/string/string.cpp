#include<iostream>
#include<string>
using namespace std;
const int N=2e5+10;
int n,a[N];
char c[N];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	s=" ";
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++) s+=c[i];
	}
	int m=s.size()-1,ans=0;
	//cout<<s<<" ";
	for(int i=1;i<=m/2;i++){
		if(s[i]!=s[m-i+1]) ans++;
	}
	cout<<ans;
	return 0;
}
