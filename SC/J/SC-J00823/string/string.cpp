#include<bits/stdc++.h>
using namespace std;
string s,ch;
long long cnt,n,x,sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>x>>ch;
		sum+=x;
		while(x--) s+=ch;
	}
	for(long long i=sum-1,j=0;i>=j;i--,j++)
		if(s[i]!=s[j]){
			cnt++;
			s[j]=s[i];
		}
	cout<<cnt;
	return 0;
}
