#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n;
struct node{
	int a;
	char c;
}ww[N];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long len=0;
	for(int i=1;i<=n;i++){
		cin>>ww[i].a>>ww[i].c;	
		len+=ww[i].a;
	}
	long long len1=len/2;
	int l=1,r=n;
	while(len1>0){
		int cnt;
		if(len1-ww[l].a>=0){
			len1-=ww[l].a;
			cnt=ww[l].a;
		}
		else{
			cnt=len1;
			len1=0;
		}
		
		
		for(int i=r;i>=1;i--){
			if(cnt-ww[i].a>=0){
				cnt-=ww[i].a;
				//san=ww[i].a;
				if(ww[i].c!=ww[l].c) ans+=ww[i].a;
				r=i-1;
			}
			else{
				if(ww[i].c!=ww[l].c) ans+=cnt;
				ww[i].a-=cnt;
				cnt=0;
			}
			//if(ww[i].c!=ww[l].c) ans+=san;
			if(cnt==0){
				//r=i-1;
				break;
			}
		}l++;	
	}cout<<ans;
	
	
	
	
	return 0;
} 

/*
3
2 a
2 b
1 c





6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b



*/
