#include<bits/stdc++.h>
#define lnt long long
#define endl '\n'
using namespace std;
const int N=2e5+10;
int a[N];
char b[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("string.in","r",stdin); 
	freopen("string.out","w",stdout); 
	int n;cin>>n;
	//string b;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>b[i];
		//cin>>a[i]>>b[i];
	}
	lnt sum=0;
	for(int i=1,j=n;j-i>0;){
		int aaa=min(a[i],a[j]);
		//cout<<i<<j<<b[i]<<b[j];
		if(b[i]!=b[j]){
			sum+=aaa;
		}
		a[i]-=aaa;
		a[j]-=aaa;
		if(a[i]==0){
			i++;
		}
		if(a[j]==0){
			j--;
		}
	}
	//cout<<111;
	cout<<sum;
	return 0;
} 
