#include<bits/stdc++.h>
using namespace std;
struct node{
	int len,yu;
	char ch;
}a[200009];
int n;
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].len>>a[i].ch;
		a[i].yu=a[i].len;
	}
	int r=n;
	for(int i=1;i<=n;i++){
		if(a[i].yu==0){
			break;
		}
		while(a[i].yu>=a[r].yu){
			if(a[i].ch!=a[r].ch)ans+=a[r].yu;
			a[i].yu-=a[r].yu;
			a[r].yu=0;
			r--;
		}
		if(a[i].yu>0){
			if(a[i].ch!=a[r].ch)ans+=a[i].yu;
			a[r].yu-=a[i].yu;
			a[i].yu=0;
		}
	}
	cout<<ans;
	return 0;
}