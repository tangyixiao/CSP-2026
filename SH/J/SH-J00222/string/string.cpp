#include<bits/stdc++.h>
using namespace std;
struct ds{
	char c;
	int n;
};
ds d[200000];
long long cnt=0,ans=0,m;
int t=0,n;
bool gt(long long a,long long b){
	char x,y;
	//cout<<a<<"-"<<b<<endl;
	for(int i=0;i<n;i++){
		a-=d[i].n;
		if(a<0){
			//cout<<i<<" -------"<<endl;
			x=d[i].c;
			//cout<<x<<" -------"<<endl;
			break;
		}
	}
	for(int i=0;i<n;i++){
		b-=d[i].n;
		if(b<0){
			//cout<<i<<" ----"<<endl;
			y=d[i].c;
			//cout<<y<<" ----"<<endl;
			break;
		}
	}
	//cout<<x<<endl<<y;
	return x!=y;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>d[i].n>>d[i].c;
		cnt+=d[i].n;
		t+=d[i].n%2;
	}
	if(t%2==0){
		m=cnt/2-1;
		for(long long i=0;m-i>=0;i++){
			if(gt(m-i,m+1+i)){
				ans++; 
			}
		}
		cout<<ans;
	} 
	if(t%2==1){
		m=cnt/2-1;
		for(long long i=0;m-i>=0;i++){
			if(gt(m-i,m+2+i)){
				ans++; 
			}
		}
		cout<<ans;
	} 
	return 0;
} 
/*
3
2 a
2 b
1 c
*/
