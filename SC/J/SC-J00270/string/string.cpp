#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,a;
const int N=1e9+10;
char b[N];
bool c[N];
ll cnt;
ll temp;
ll ans;
char d;
int j;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","r",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>d;
		for(j=0;j<a;j++){
			b[j]=d;
			ans++;
		}
		if(b[j]==b[j-1]){
			c[j]=c[j-1]=false;
			temp++;
		}
	}
	if(temp==n){
	cout<<0;
	return 0;
}
    for(int m=0;m<ans;m++){
    	for(int n=ans;n>=0;n--){
    		while(m!=n){
    		if(b[m]!=b[n]){
    			b[n]=b[m];
    			cnt++;
			}
		}
	}
	}
	cout<<cnt;
	return 0;
}