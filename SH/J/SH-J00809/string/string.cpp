#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans=0,lasta=0,lastb=0,cn=0,cnt=0;
int n;
ll a[200005];
char b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string,out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		cn+=a[i];
	}
	cn/=2;
	lasta=a[1],lastb=a[n],cnt=a[1];
	for(int i=1,j=n;;){
		if(i>j){
			break;
		}
		if(lasta<lastb){
			if(b[i]!=b[j]){
				ans+=lasta;
			}
			i++;
			lastb-=lasta;
			lasta=a[i];
		}
		else if(lasta>lastb){
			if(b[i]!=b[j]){
				ans+=lastb;
			}
			j--;
			lasta-=lastb;
			lastb=a[j];
		}
		else{
			if(b[i]!=b[j]){
				ans+=lasta;
			}
			i++;
			j--;
			lasta=a[i];
			lastb=a[j];
		}
	}
	cout<<ans;
	return 0;
}
