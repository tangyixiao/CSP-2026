#include <bits/stdc++.h>
using namespace std;
int n;
char a[200005];
int q[200005];
int p1=1,p2;
long long cnt=0,all=0,dicoration=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>q[i]>>a[i];
		all+=q[i];
	}
	p2=n;
	while(dicoration<=all/2){
		if(a[p1]!=a[p2]){
			cnt+=min(q[p1],q[p2]);
		}
		dicoration+=min(q[p1],q[p2]);
		//change
		if(q[p1]>q[p2]){
			q[p1]-=q[p2]; 
			p2--;
		}else if(q[p1]<q[p2]){
			q[p2]-=q[p1];
			p1++;	
		}else{
			p1++;
			p2--;
		}
	}
	cout<<cnt;
	return 0;
}