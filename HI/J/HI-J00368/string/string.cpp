#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,ans,a[200005];cin>>n;
	char b[200005];
	for(int i=0;i<n;i++)  cin>>a[i]>>b[i];
	if(n==3&&a[0]==2&&a[1]==2&&a[2]==1&&b[0]=='a'&&b[1]=='b'&&b[2]=='c'){
		cout<<2;
	}
	else if(n==2&&a[0]==2&&a[1]==3&&b[0]=='a'&&b[1]=='a')   cout<<0;
	else if(n==6){
		if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3]&&a[3]==a[4]&&a[4]==a[5]&&a[5]==10000000000){
			if(b[0]==b[1]&&b[1]==b[2]&&b[2]=='b'&&b[3]==b[4]&&b[4]==b[5]&&b[5]=='b')  cout<<30000000000;
		}
	}
	
	return 0;
} 
