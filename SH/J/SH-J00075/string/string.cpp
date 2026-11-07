#include<bits/stdc++.h>
using namespace std;
int n;
int s;
int a[200009];
string k[200009];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<=n;i++)cin>>a[i]
	for(int i=0;i<=n;i++){
		s+=a[i];
    }
		cout<<s/2;
	return 0;
}

