#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define endl '\n'
#define pii pair<int,int>
const int M=2e5+5;
ll len=0,n,a[M],ans=0;
string s=" ";
char ds[M];
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>ds[i];
		len+=a[i];
		for(int j=1;j<=a[i];j++) s+=ds[i];
	}
	for(int i=1;i<=len/2;i++) if(s[i]!=s[len+1-i]) ans++;
	cout<<ans;
	return 0;
}
//10-31 09:53:06 想上厕所 
//RP++