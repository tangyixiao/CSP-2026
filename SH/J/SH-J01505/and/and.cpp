#include<bits/stdc++.h>
using namespace std;
int n,m,sq=1,len[1009],ml,ans;
int a[1009],sl[1009];
char t[1009][1009];
int main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)
		for(int j=0;j<1009;j++){
		sq*=2;
		if(sq>a[i]){
			len[i]=j-1;
			break;
		}
		t[i][j]=a[i]%sq;
		cout<<t[i]<<endl;
	}
	for(int i=0;i<n;i++)
	if(ml<len[i])ml=len[i];
	for(int i=ml;i>0;i--){
		for(int j=0;j<n;j++){
			if(t[j][i]){
			sl[i]+=1;
		}}
		if(sl[i]>=m){
		ans+=sq;
		}}
		cout<<ans;
	return 0;
}
