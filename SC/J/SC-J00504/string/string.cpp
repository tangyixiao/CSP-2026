#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct sdata{
	public:
		int lth;
		char c;
}dt[200020];

int s[200020]={0};

int binsch(int l,int r,int x){
	if(l==r){
		return l;
	}
	
	int mid=(r-l)/2+l;
	if(s[mid]>x){
		binsch(l,mid,x);
	}
	else if(s[mid]==x){
		return mid;
	}
	else{
		binsch(mid+1,r,x);
	}
	
}

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	cin>>n;
	
	int len=0;
	for(int i=1;i<=n;i++){
		cin>>dt[i].lth>>dt[i].c;
		len+=dt[i].lth;
		s[i]=s[i-1]+dt[i].lth;
	}
	
	int sg=binsch(1,n,(len+1)/2);
	if(s[sg]>(len+1)/2){
		for(int i=n;i>sg;i--){
			dt[i+1].lth=dt[i].lth;
			dt[i+1].c=dt[i].c;
		}
		dt[sg+1].c=dt[sg].c;
		dt[sg+1].lth=s[sg]-(len+1)/2;
		dt[sg].lth=(len+1)/2-s[sg-1];
		
		n+=1;
	}
	
	int ans=0;
	sdata cur={0,dt[1].c};
	int llen=0,rlen=0;
	int h=0,t=n+1;
	int fl=1;
	while(h<t){
		if(llen<=rlen){
			h++;
			if(cur.c!=dt[h].c){
				if(cur.lth<=dt[h].lth){
					ans+=cur.lth;
					cur.c=dt[h].c;
				}
				else{
					ans+=dt[h].lth;
				}
			}
			if(fl==1){
				cur.lth+=dt[h].lth;
			}
			else{
				if(cur.lth>=dt[h].lth){
					cur.lth-=dt[h].lth;
				}
				else{
					cur.lth=dt[h].lth-cur.lth;
					fl=1;
				}
			}
			llen+=dt[h].lth;
		}
		else{
			t--;
			if(cur.c!=dt[t].c){
				if(cur.lth<=dt[t].lth){
					ans+=cur.lth;
					cur.c=dt[t].c;
				}
				else{
					ans+=dt[t].lth;
				}
			}
			if(fl==2){
				cur.lth+=dt[t].lth;
			}
			else{
				if(cur.lth>=dt[t].lth){
					cur.lth-=dt[t].lth;
				}
				else{
					cur.lth=dt[t].lth-cur.lth;
					fl=2;
				}
			}
			
			rlen+=dt[t].lth;
		}
	}
	cout<<ans;
	
	
	
	return 0;
	
	fclose(stdin);
	fclose(stdout);
}