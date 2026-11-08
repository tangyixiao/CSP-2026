#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[200005],cnt=0;
string c[200005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		string w=c[i]+c[i]+c[i]+c[i]+c[i];
		for(int j=1;j<=a[i]/5;j++){
			s+=w;
		}
		for(int j=1;j<=a[i]%5;j++)s+=c[i];
	}
	if(s.size()%2==0){
		for(int i=0;i<=(s.size()-1)/2;i++){
			if(s[i]!=s[s.size()-1-i]){
				cnt++;
			}
		}
	}else{
		for(int i=0;i<=(s.size()-2)/2;i++){
			if(s[i]!=s[s.size()-1-i]){
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
