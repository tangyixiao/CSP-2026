#include<bits/stdc++.h>
using namespace std;
#define fr(i,s,n) for(int i=s;i<=n;i++)
char s[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int n,k=0,a,sum=0;
	cin>>n;
	fr(i,1,n){
		char c;
		cin>>a>>c;
		fr(i,1,a){
			s[++k]=c;
		}
	}
	fr(i,1,(k+1)/2){
		if(s[i]!=s[k-i+1]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}