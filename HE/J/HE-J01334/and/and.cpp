#include<bits/stdc++.h>
using namespace std;
int m,n;
long long a2[32]={1},x,c,s;
vector<long long>a; 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<31;i++){
		a2[i]=a2[i-1]*2;
	}for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}sort(a.begin(),a.end());
	int t=0,t1;
	while(t<m){
		t1=*upper_bound(a2,a2+31,a[n-1]);
		if(n-*upper_bound(a.begin(),a.end(),t1)+1>m){
			t=n-*upper_bound(a.begin(),a.end(),t1)+1; 
		}else{
			for(int i=*upper_bound(a.begin(),a.end(),t1);i<n;i++){
				a[i]-=t1;
			}
		}
	}int c11=INT_MAX;
	while(t){
		c11=c11&a[n-t];
		t--;
	} 
	cout<<c11;
	return 0;
} 
