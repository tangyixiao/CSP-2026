#include<bits/stdc++.h>
using namespace std;
int n,i,j,y,p,ans,a[200005];
char x,s[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>x;
		for(int j=y;j<y+a[i];j++){
			s[j]=x;
		}	
		y+=a[i];
	}
	for(int i=0;i<y;i++){
		if(s[i]!=s[y-1-i]){
			ans++;
			//cout<<s[i]<<" "<<s[y+1-i]<<endl;
		}
	}
	cout<<ans/2;
	return 0;
}
