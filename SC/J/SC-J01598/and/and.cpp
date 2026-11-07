#include<bits/stdc++.h>
using namespace std;
string get,end;
int end_num;
int turn(int x){
	int t=0;
	while(x!=1){
		if(x%2==0){
			x/=2;
			get[t]=1;
		}
		else if(x%2==1){
			x/=2;
			get[t]=1;
		}
	}
	for(int i=0;i<t;i++){
		for(int j=t-1;j>=0;j--){
			end[i]=get[j];
			end_num+=end[i]*i*10;
		}
	}
	return end_num;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,num[200005],maxn=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>num[i];
		turn(num[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			maxn=max(maxn,num[i]);
		}
	}
	cout<<maxn-3;
	return 0;
}