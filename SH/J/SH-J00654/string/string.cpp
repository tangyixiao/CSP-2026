#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
struct node{
	ll num;
	char abc;
}a[1000009];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	ll sum;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].abc;
	}
	
	ll ans=0;
	for(int i=1,j=n;sum!=0;){   //2*a 2*b 1*c
		if(i==j) break;
		
		ll del=min(a[i].num,a[j].num);
		if(a[i].abc!=a[j].abc){
			ans+=del;
		}
		a[i].num-=del;
		a[j].num-=del;
		sum-=2*del;
		
		if(a[i].num==0) i++;
		if(a[j].num==0) j--;
	}
	
	cout<<ans<<endl;
	
//	for(int i=1;i<=n;i++){
//		cout<<a[i].num<<"*"<<a[i].abc<<" ";
//	}
	
	return 0;
}
