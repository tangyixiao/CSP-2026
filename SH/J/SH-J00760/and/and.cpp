#include<bits/stdc++.h>
using namespace std;
int a[200005];
int a2[200005];
int b[35];int maxx=-1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a2[i]=a[i];
	}
	sort(a+1,a+n+1,greater<int>());
	int all=a[1];
	int po=30;
	for(int i=1;i<=n;i++){
		int k=0;
		while(a2[i]){
			if(a2[i]%2==1){
				b[k]++;
			}
			k++;
			a2[i]>>=1;
		}
	}
	
	for(int i=0;i<=31;i++){
		if(b[i]>=m){
			maxx=max(maxx,i);
		}
	}
	int kkk=1<<(maxx+1);
	kkk--;
	for(int i=1;i<=n;i++){
		a[i]&=kkk;
	}
	sort(a+1,a+n+1,greater<int>());
	int cnt=0,ans=-1;
	for(int i=1;i<=n&&cnt<=m;i++){
			if(ans==-1&&cnt+1<=m){
				ans=a[i];
				cnt++;
			}
			else if(cnt+1<=m){
				ans&=a[i];
				cnt++;
			}
	}
	//cout<<maxx<<endl;
	if(ans==-1){
		ans=0;
	}
	cout<<ans;
	return 0;
}
