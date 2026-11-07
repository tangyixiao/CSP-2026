#include<bits/stdc++.h>
using namespace std;

const int MAXN=1e6+50;

void readset(){
	freopen("string.out","w",stdout);
	freopen("string.in","r",stdin);
}

void pre_readset(){
	freopen("string6.in","r",stdin);
}

long long n;
long long length;
long long mid;
long long ans;

long long lsum;
long long llen=1;
long long rsum;
long long rlen=1;

struct readnode{
	long long len;
	char c;
}node[MAXN],l[MAXN],r[MAXN];

void read(){
	cin>>n;
	
	for(long long i=1;i<=n;i++){
		cin>>node[i].len;
		cin>>node[i].c;
		
		length+=node[i].len;
	}
	
	mid=(length+1)/2;
	//cout<<mid;
	//cout<<"check";
}//无误 

void check(){//1-0检查用 
	for(int i=1;i<=llen;i++){
		cout<<l[i].len<<' '<<l[i].c<<'\n';
	}
	cout<<'\n';
	for(int i=1;i<=rlen;i++){
		cout<<r[i].len<<' '<<r[i].c<<'\n';
	}
}

void solve(){//8.58OK
	
	while(lsum<mid){
		if(lsum+node[llen].len<=mid){//书 
			lsum+=node[llen].len;
			l[llen].len=node[llen].len;
			l[llen].c=node[llen].c;
			
			++llen;
			//cout<<lsum<<'\n';
		}
		else {
			l[llen].len=mid-lsum;
			l[llen].c=node[llen].c;
			lsum=mid;
			
			++llen;
			
			break;
		}
	}
	while(rsum<mid){
		if(rsum+node[n-rlen+1].len<mid){
			rsum+=node[n-rlen+1].len;
			r[rlen].len=node[n-rlen+1].len;
			r[rlen].c=node[n-rlen+1].c;
			
			++rlen;
		}
		else {
			r[rlen].len=mid-rsum;
			r[rlen].c=node[n-rlen+1].c;
			rsum=mid;
			
			++rlen;
		}
	}
	
	//check();
	
	//2-0双指针算法 
	/*
	数据段
	
	node l
	node r
	long long ans;
	 
	*/
	
	
	
	long long li=1,ri=1;
	while(li<llen||ri<rlen){
		long long length_l=l[li].len;
		long long length_r=r[ri].len;
		
		if(length_l==length_r){
			if(l[li].c==r[ri].c){
				++ri;
				++li;
			}
			else {
				ans+=length_l;
				++ri;
				++li;
				
			}
		}
		
		
		else if(length_l<length_r){
			if(l[li].c==r[ri].c){
				++li;
				r[ri].len-=length_l;
			}
			else {
				ans+=length_l;
				++li;
				r[ri].len-=length_l;
			}
		}
		 
		else if(length_l>length_r){
			if(l[li].c==r[ri].c){
				++ri;
				l[li].len-=length_r;
			}
			else {
				ans+=length_r;
				++ri;
				l[li].len-=length_r;
			}
		}
	}
}

int main(){
	//pre_readset();
	readset();
	read();
	solve();
	
	cout<<ans;
	return 0;
}