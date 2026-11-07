#include<bits/stdc++.h>
using namespace std;
int diff(int x,int y){
	int cnt=0;
	int h[200001]={0};
	string s1="";
	string s2="";
	while(x){
	s1+=x%2;
	x/=2;	
	}
	while(y){
	s2+=y%2;
	y/=2;	
	}
	int s=max(s1.size(),s2.size());
	for(int i=0;i<s;i++){
			if(s1[i]==1&&s2[i]==1){
				h[i]=1;
			}else{
				h[i]=0;
			}	
		}
	for(int i=0;i<s;i++){
		int ans=pow(2,i);
		cnt+=h[i]*ans;
	}
	return cnt;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	int a[200001]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
	sort(a,a+n,greater<int>());
	int c=a[0];
	for(int i=1;i<m;i++){
		c=diff(c,a[i]);
	}
	cout<<c;
	return 0;
}
