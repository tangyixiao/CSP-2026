#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int l,r;
int lid,rid;
struct Segment{
	int num;char ch;
	int l,r;
	Segment(){}
	Segment(int _n,int _ch,int _l,int _r):num(_n),ch(_ch),l(_l),r(_r){}
	pair<Segment,Segment>split(int t){
		return make_pair(Segment((t-l+1),ch,l,t),Segment((r-t),ch,t+1,r));
	}
};
vector<Segment>s;
vector<Segment>a1,a2;
int num[N];
char ch[N];
int n;
int len;
int llen,rlen;
int ans=0;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>num[i]>>ch[i],len+=num[i];
	if(len%2==0)l=len/2,r=l+1;
	else l=r=(len+1)/2;
	len=1;s.push_back(Segment(0,0,0,0));
	for(int i=1;i<=n;i++)s.push_back(Segment(num[i],ch[i],len,len+num[i]-1)),len+=num[i];
	for(int i=1;i<=n;i++){
		if(s[i].l<=l&&s[i].r>=l)lid=i;
		if(s[i].l<=r&&s[i].r>=r)rid=i;
	//	cout<<"S"<<i<<" "<<s[i].l<<" "<<s[i].r<<" "<<s[i].num<<" "<<s[i].ch<<"\n";
	}llen=rlen=0;
//	cout<<lid<<" "<<rid<<" "<<l<<" "<<r<<"\n";
//	s.push_back(Segment(0,0,n+1,n+1));
//	cout<<s[3].l<<"\n\n";
//	while(1){
//		cout<<lid<<" "<<rid<<" "<<llen<<" "<<rlen<<"\n";
//		if(lid==0&&rid==n+1)break;
//		if(llen<=rlen){
//			llen+=s[lid].num;
//			lid--;
//			if(s[lid].ch!=0&&s[lid].ch!=s[rid].ch)ans+=abs(s[lid].l-s[rid].r);
//		}else{
//			rlen+=s[rid].num;
//			rid++;
//			cout<<":"<<s[rid].l<<" "<<s[rid-1].l<<"\n";
//			if(s[rid].ch!=0&&s[lid].ch!=s[rid].ch)ans+=abs(s[lid].l-s[rid].r);
//		}
//	}
	int idx=rid;//a1.push_back(Segment(0,0,0,0));a2.push_back(Segment(0,0,0,0));
	for(int i=lid;i>=1;i--){
		if(i!=lid)a1.push_back(s[i]);
		else if(l<s[i].r)a1.push_back(Segment(l-s[i].l+1,s[i].ch,s[i].l,l));
		else a1.push_back(s[i]);
	//	cout<<a1[a1.size()-1].l<<" "<<a1[a1.size()-1].r<<" "<<l<<"\n";
		a1[a1.size()-1].l=l+1-a1[a1.size()-1].l;
		a1[a1.size()-1].r=l+1-a1[a1.size()-1].r;
		swap(a1[a1.size()-1].l,a1[a1.size()-1].r);
	}//reverse(a1.begin(),a1.end());
	for(int i=rid;i<=n;i++){
		if(i!=rid)a2.push_back(s[i]);
		else if(r>s[i].l)a2.push_back(Segment(s[i].r-r+1,s[i].ch,r,s[i].r));
		else a2.push_back(s[i]);
		a2[a2.size()-1].l-=r-1;
		a2[a2.size()-1].r-=r-1;
	}
//	cout<<"a1:\n";
//	for(int i=0;i<(int)a1.size();i++)cout<<a1[i].num<<" "<<a1[i].ch<<" "<<a1[i].l<<" "<<a1[i].r<<"\n";
//	cout<<"a2:\n";
//	for(int i=0;i<(int)a2.size();i++)cout<<a2[i].num<<" "<<a2[i].ch<<" "<<a2[i].l<<" "<<a2[i].r<<"\n";
	lid=rid=0;int x=a2[a2.size()-1].r;
	a1.push_back(Segment(0,0,x+1,x+1));a2.push_back(Segment(0,0,x+1,x+1));
	if(a1[0].ch!=a2[0].ch)ans+=min(a1[0].num,a2[0].num);
	while(1){
		//cout<<lid<<" "<<rid<<" "<<ans<<"\n";
		if(lid==a1.size()-1&&rid==a2.size()-1)break;
		if(a1[lid].r<=a2[rid].r){
			lid++;
			if(a1[lid].ch!=a2[rid].ch){
				//if(a2[rid].r>a1[lid].r)ans+=min();
				//else ans+=a1[lid].l-a2[rid].r;
				ans+=min(a1[lid].r,a2[rid].r);
				ans-=a1[lid-1].r;
			}
		}else{
			rid++;
			if(a1[lid].ch!=a2[rid].ch){
//				if(a2[rid].r<a1[lid].r)ans+=a2[rid].num;
//				else ans+=a2[rid].l-a1[lid].r;
				ans+=min(a1[lid].r,a2[rid].r);
				ans-=a2[rid-1].r;
			}
		}
	}
	cout<<ans<<"\n";
	return 0;
}
/*
daabbcd
aa b
bb c

5
1 d
2 a
2 b
1 c
1 d


3
2 a
3 b
1 c

2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
