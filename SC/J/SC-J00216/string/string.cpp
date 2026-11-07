#include<bits/stdc++.h>
using namespace std;
long long a[100005],l,cnt,n;
string s,c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++){
			s[l]=c[i];
			l++;
		}
	}
	for(int i=0;i<=(l-1)/2;i++){
		if(s[i]==s[l-1-i]) continue;
		else cnt++;
	}
	cout<<cnt;
	return 0;
}