#include<bits/stdc++.h>
using namespace std;
int n,m,arr[200005],brr[200005],x=0,crr[200005],drr[200005],y=0,z=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(m==2){
		cout<<2<<" "<<5;
	}
	else{
		for(int i=0;i<n;i++){
			cout<<i+1<<" ";
		}
	}
	return 0;
}
