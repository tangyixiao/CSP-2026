#include<bits/stdc++.h>
using namespace std;
struct Segment{
	long long l,r,len;
	char val;
	Segment(){
		l=0,r=0,val='\0',len=0;
	}
	Segment(long long start,long long end,long long length,char value){
		l=start,r=end,val=value,len=length;
	}
} s[200005];
int n;
int find(long long id){
	for(int i=0;i<n;i++){
		if(s[i].l<=id&&id<=s[i].r){
			return i;
		}
	}
	return -1;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long size=0;
	long long a;
	char c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>c;
		s[i]=Segment(size,size+a-1,a,c);
		size+=a;
	}
	/*cout<<"s:{"<<endl;
	for(int i=0;i<n;i++){
		cout<<"   "<<i<<": "<<s[i].l<<" "<<s[i].r<<" "<<s[i].len<<" "<<s[i].val<<endl;
	}
	cout<<"   size="<<size<<"\n}"<<endl;*/
	long long ans=0;
	int ls,rs;
	long long lc,rc;
	if(size%2==1){
		ls=find((size-1)/2-1),rs=find((size+1)/2);
		lc=(size-1)/2-s[ls].l; rc=s[rs].r-(size-1)/2;
	}else{
		ls=find(size/2-1),rs=find(size/2);
		lc=size/2-s[ls].l; rc=s[rs].r-size/2+1;
	}
	while(ls>=0&&rs<n){
		if(s[ls].val==s[rs].val){
			lc-=min(lc,rc),rc-=min(lc,rc);
		}
		if(lc==0){
			ls--;
			if(ls<0) break;
			lc=s[ls].len;
		}if(rc==0){
			rs++;
			if(rs>=n) break;
			rc=s[rs].len;
		}
		long long d=min(lc,rc);
		ans+=d;
		lc-=d,rc-=d;
		//cout<<ans<<" "<<lc<<" "<<rc<<" "<<endl;
	}
	cout<<ans<<endl;
}
