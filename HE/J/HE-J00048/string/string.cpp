#include<bits/stdc++.h>
using namespace std;
int n;
long long cnt;
bool t;
string b[200001],c;
long long a[200001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=2;i<=n;i++){
		if(b[i]==b[i-1]){
			t=true;
		}
		else{
			t=false;
			break;
		}
	}
	if(t==1)cout<<0;
	return 0;
}
