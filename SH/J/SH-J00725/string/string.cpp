#include<bits/stdc++.h>
using namespace std;
struct Node{
	int Nu;
	char c;
}a[200005];
int n,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].Nu>>a[i].c;
	}
	int l=1,r=n;
	while(r>l){
		if(a[l].c!=a[r].c){
			ans+=min(a[l].Nu,a[r].Nu);
		}
		if(a[l].Nu>a[r].Nu){
			a[l].Nu-=a[r].Nu;
			r--;
		}
		else if(a[l].Nu==a[r].Nu){
			l++;
			r--;
		}
		else{
			a[r].Nu-=a[l].Nu;
			l++;
		}
	}
	cout<<ans<<endl;
}
