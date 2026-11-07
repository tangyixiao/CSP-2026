#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200005],n,ans=0;
char c[200005];
ll headrest,tailrest,head,tail;
char headc,tailc;
int main(){
	freopen(" string.in","r",stdin);
	freopen(" string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	head=1;tail=n;
	headrest=a[1];headc=c[1];
	tailrest=a[n],tailc=c[n];
	while(head<tail){
		ll minn=min(headrest,tailrest);
		if(headc!=tailc){
			ans+=minn;
		}
		headrest-=minn;tailrest-=minn;
		if(headrest==0){
			headrest=a[head+1];
			headc=c[head+1];
			head++;
		}
		if(tailrest==0){
			tailrest=a[tail-1];
			tailc=c[tail-1];
			tail--;
		}
	}
	cout<<ans;
	return 0;
}
