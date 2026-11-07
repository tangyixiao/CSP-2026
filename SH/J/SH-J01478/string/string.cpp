#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200005],ans;
char c[200005];
bool flat=1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		ans+=a[i];
	}
	for(int i=2;i<=n;i++){
		if(c[i]!=c[i-1]){
			flat=0;
			break;
		}	
	}
	if(flat==1){
		cout<<0;
	}else{
		cout<<ans/2;
	}
	return 0;
}
