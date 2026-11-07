#include<bits/stdc++.h>
#define int long long
using namespace std;
char c[200005];
int a[2000005],n,tot=1,sum=0;
string s;
bool check(string x){
	string xl;
	for(int j=0,i=x.size()-1;i>=0;i--){
		x[i]=xl[j];
		j++;
	}
	for(int j=x.size(),i=0;i<=x.size();i++){
		if(x[j]!=xl[i]){
			return 0;
		}
	}
	return 1;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=0;i<n;i++){
		for(int j=tot;j<tot+a[i];j++){
			s[j]=c[i];
		}
		tot+=a[i];
	}
	for(int j=1,i=tot;i>=1;i++){
		if(check(s)){
			break;
		}
		s[i]=s[j];
		sum++;
		j++;
	}
	cout<<sum;
	return 0;
}
