#include<bits/stdc++.h>
using namespace std;//Trick||Treat!

const long long N=2e5+2;

struct str{
	long long cnt=0;
	long long s,e;
	char ch;
}s[N];
long long n;

signed main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	
	for(long long i=1;i<=n;i++) cin>>s[i].cnt>>s[i].ch;
	
	//找s&e 
	s[0].s=0;
	for(long long i=2;i<=n+1;i++) s[i].s=s[i-1].s+s[i-1].cnt;
	s[n].e=0;
	for(long long i=n-1;i>=0;i--) s[i].e=s[i+1].e+s[i+1].cnt;
	
	/*long long mid=s[n-1].e/2;
	for(int i=1;i<n;i++){
		if(s[i-1].s<=mid&&mid<=s[i].s){
			mid=s[i].s;
			break;
		}
	}*/
	
	long long l=1,r=n;
	long long sum=0;
	long long ans=0;
	if(s[l].ch!=s[r].ch) ans+=min(s[l].cnt,s[r].cnt);
	sum=min(s[l+1].s,s[r-1].e);
	
	while(l<=n&&r>0){
		//cout<<sum<<"\n";
		if(s[l+1].s==sum&&s[r-1].e==sum){
			l++;r--;
			if(s[l].ch!=s[r].ch) ans+=min(s[l].cnt,s[r].cnt);
			sum=min(s[l+1].s,s[r-1].e);
			//cout<<1<<" ";
		}
		else if(s[l+1].s==sum){
			l++;
			if(s[l+1].s<=s[r-1].e){
				if(s[l].ch!=s[r].ch) ans+=s[l].cnt;
				sum=s[l+1].s;
				//cout<<2<<" ";
			}
			else if(s[l+1].s>s[r-1].e){
				if(s[l].ch!=s[r].ch) ans+=(s[r-1].e-sum);
				sum=s[r-1].e;
				//cout<<3<<" ";
			}
		}
		else if(s[r-1].e==sum){
			r--;
			if(s[l+1].s>=s[r-1].e){
				if(s[l].ch!=s[r].ch) ans+=s[r].cnt;
				sum=s[r-1].e;
				//cout<<4<<" ";
			}
			else if(s[l+1].s>s[r-1].e){
				if(s[l].ch!=s[r].ch) ans+=(s[l+1].s-sum);
				sum=s[l+1].s;
				//cout<<5<<" ";
			}
		}		
	}
	
	cout<<ans/2;
	
	return 0;
	
	/*long long sum=0;
	for(long long i=0;i<n;i++) sum+=s[i].cnt;
	long long mid=sum/2,midi;
	sum=0;
	for(long long i=0;i<n;i++){
		sum+=s[i].cnt;
		if(sum>mid){
			midi=i;
			break;
		}
	}
	
	long long l=0,r=n-1;
	stack<str> d;//左比右多的 
	long long ans=0;
	if(s[l].ch!=s[r].ch){
		ans=min(s[l].cnt,s[r].cnt);
	}
	if(s[l].cnt!=s[r].cnt){
		str temp;
		temp.cnt=s[l].cnt-s[r].cnt;
		temp.ch=(s[l].cnt>s[r].cnt? s[l].ch:s[r].ch);
		d.push(temp);
	}
	l++;r--;
	while(l<=midi){
		str tp=d.top();
		d.pop();
		if(tp.cnt>0){//左比右多时
			while(tp.cnt<s[r].cnt&&!d.empty()){
				if(tp.ch!=s[r].ch){
					ans+=tp.cnt;
				}
				s[r].cnt-=tp.cnt;
				tp=d.top();
				d.pop();
			}
			if(d.empty()){
				if(s[l].ch!=s[r].ch){
					ans=min(s[l].cnt,s[r].cnt);
				}
				str temp;
				temp.cnt=s[l].cnt-s[r].cnt;
				temp.ch=(s[l].cnt>s[r].cnt? s[l].ch:s[r].ch);
				d.push(temp);
			}
			else{
				if(tp.ch!=s[r].ch){
					ans+=tp.cnt;
				}
				tp.cnt-=s[r].cnt;
				d.push(tp);
				d.push(s[l]);
			}
		}
		else{//右比左多时
			while(tp.cnt<s[l].cnt&&!d.empty()){
				if(tp.ch!=s[l].ch){
					ans+=tp.cnt;
				}
				s[l].cnt-=tp.cnt;
				tp=d.top();
				d.pop();
			}
			if(d.empty()){
				if(s[l].ch!=s[r].ch){
					ans=min(s[l].cnt,s[r].cnt);
				}
				str temp;
				temp.cnt=s[l].cnt-s[r].cnt;
				temp.ch=(s[l].cnt>s[r].cnt? s[l].ch:s[r].ch);
				d.push(temp);
			}
			else{
				if(tp.ch!=s[r].ch){
					ans+=tp.cnt;
				}
				tp.cnt-=s[r].cnt;
				d.push(tp);
				d.push(s[l]);
			}
		}
		l++;r--;
	}
	cout<<ans;*/
}
