#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
	return a>b;
}
int m,n,ans=1,num[100005],idx;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	if(n == m){
		ans = num[0];
		for(int i=1;i<n;i++){
			ans=ans&num[i];
		}
	}
	else{
		
		sort(num,num+n,cmp);
		ans=num[0];
		for(int i=1;i<m;i++){
			ans = ans&num[i];
		}
	}
	cout<<ans;
	return 0;
}