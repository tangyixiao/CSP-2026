#include<bits/stdc++.h>
using namespace std;
struct zm{
	long x;
	char z;
};
zm a[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	long long ans=0;
	long long cnt=0;
	long long zon=0;
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		 cin>>a[i].x>>a[i].z;;
		 cnt+=a[i].x;
	}
	int i=1;
	int j=n;
	cnt/=2; 
	while(zon<cnt){
		if(a[i].x>a[j].x){
			if(a[i].z!=a[j].z) ans+=a[j].x;
			a[i].x-=a[j].x;
			zon+=a[j].x;
			j--;
		} 
		else if(a[i].x<a[j].x){
			if(a[i].z!=a[j].z) ans+=a[i].x;
			a[j].x-=a[i].x;
			zon+=a[i].x;
			i++;
		}
		else  if(a[i].x==a[j].x){
			if(a[i].z!=a[j].z) ans+=a[i].x;
			zon+=a[i].x;
			i++;j--;
		}
	}
	cout<<ans;
	return 0;
}
