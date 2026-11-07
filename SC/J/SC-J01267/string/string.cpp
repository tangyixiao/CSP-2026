#include<bits/stdc++.h>
using namespace std;
string s[20000010];
long long l,n,ans=0,shu;
struct node{
	string c;
	long long cnt;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].cnt>>a[i].c;
		shu+=a[i].cnt;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i].cnt;j++){
		    for(int k=1;k<=shu;k++){
		    	s[k]=a[j].c;
			}
		}
	}
	/*for(int i=1;i<=shu;i++){
		cout<<s[i];
	}
	cout<<endl;*/
	for(int i=1;i<=shu;i++){
		for(int j=shu;j>=1;j--){
			if(s[i]!=s[j]) ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}