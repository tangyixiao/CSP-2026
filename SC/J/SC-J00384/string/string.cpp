#include<bits/stdc++.h>
using namespace std;
const int N=200010;
struct Seg{
	long long l,r;
	char val;
}seg[N];
int segn;
vector<long long> slsum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>segn;
	slsum.resize(segn+1);
	slsum.push_back(0);
	long long lastR=0;
	for(int i=1;i<=segn;i++){
		int len; char ch;
		cin>>len>>ch;
		slsum[i]=slsum[i-1]+len;
		seg[i].val=ch,seg[i].l=lastR+1,seg[i].r=lastR+len;
		lastR+=len;
	}
	long long n=lastR;
	long long lp=n/2+(n%2); long long rp=lp+1-n%2;
	int lseg=lower_bound(slsum.begin(),slsum.end(),lp)-slsum.begin();
	int rseg=lseg+(lp==slsum[lseg]);
	
//	cout<<lp<<' '<<rp<<' '<<lseg<<' '<<rseg<<'\n';
	
	long long ans=0;
	while(rp<=n&&rseg<=segn){
		if(seg[rseg].val!=seg[lseg].val) ans++;
		int delta=seg[rseg].r-rp;
		rp=seg[rseg].r;
		
//		cout<<delta<<' '<<rp<<endl;
		
		if(delta<=0){
			rp++,rseg++; lseg-=(lp==seg[lseg].l),lp--;
			continue;
		}
		
		int remain=delta; long long llp=lp;
		while(remain>0){
			if(llp-seg[lseg-1].r<=remain){
				remain-=llp-seg[lseg-1].r;
				ans+=(seg[lseg].val!=seg[rseg].val)*(llp-seg[lseg-1].r-1);
				llp=seg[lseg-1].r;
				lseg--;
				if(seg[rseg].val!=seg[lseg].val) ans++;
			}
			else break;
			
//			cout<<"in while: "<<ans<<' '<<remain<<' '<<llp<<' '<<lseg<<endl;
			
		}
		ans+=(seg[lseg].val!=seg[rseg].val)*remain;
		llp-=remain; remain=0; lp=llp;
		
//		cout<<"aaa: "<<ans<<' '<<remain<<' '<<llp<<' '<<lseg<<endl;
		
		rp++,rseg++; lseg-=(lp==seg[lseg].l),lp--;
		
//		cout<<"bbb: "<<rp<<' '<<rseg<<' '<<lp<<' '<<lseg<<endl;
		
	}
	cout<<ans<<'\n';
    return 0;
}