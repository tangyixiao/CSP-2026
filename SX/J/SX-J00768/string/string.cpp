#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int a[N],n;
char c[N];

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	
	int l=1,r=n,cnt=0,pos=-1;
	while(l<r){
		if(a[l]<=a[r])pos=l;
		else pos=r;
		if(c[l]==c[r]){
			if(pos==l)a[r]-=a[l],l++;
			else a[l]-=a[r],r--;
		}else{
			if(pos==l)a[r]-=a[l],cnt+=a[l],l++;
			else a[l]-=a[r],cnt+=a[r],r--;
		}
//		cout<<"Now:"<<l<<" "<<r<<"ÊýÁ¿:"<<cnt<<"\n";
	}
	cout<<cnt<<"\n";
	return 0;
}
