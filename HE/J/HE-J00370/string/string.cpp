#include <bits/stdc++.h>
using namespace std;
struct st{
	long long a;
	char b;
};
st x[10000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long sz=0;
	for(int i=0;i<n;i++){
		cin>>x[i].a;
		cin>>x[i].b;
		sz+=x[i].a;
	}
	long long len1=sz/2;
	long long sz1=sz;
	int w1=0,w2=n-1;
	long long szt=0;
	while(sz1>1){
        long long mn=min(x[w1].a,x[w2].a);
		x[w1].a-=mn;
		x[w2].a-=mn;
		if(x[w1].b!=x[w2].b){
			szt+=mn;
		}
		if(x[w1].a==0){
			w1++;
		}
		if(x[w2].a==0){
			w2--;
		}
		sz1-=2*mn;
	}
	cout<<szt;
	return 0;
}
//Trick||Treat!
