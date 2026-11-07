#include <bits/stdc++.h>
using namespace std;


const int N=200005;
struct stri{
	char c;
	int num;
} G[N];
unsigned long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>G[i].num>>G[i].c;
		ans+=G[i].num;
		
	}
	ans/=2;
	int l=0,r=n-1;
	while(l<=r){
	//	cout<<"l="<<l<<" r="<<r<<endl;
		int t=min(G[l].num,G[r].num);
		if(G[l].c==G[r].c){
			if(l==r){
				ans-=t/2;
			} else {
				ans-=t;
				
			}
		}
		G[l].num-=t;
		G[r].num-=t;
		if(G[l].num<=0){
			l++;
		}
		if(G[r].num<=0){
			r--;
		}
	}
	cout<<ans<<endl;
	return 0; 
}
