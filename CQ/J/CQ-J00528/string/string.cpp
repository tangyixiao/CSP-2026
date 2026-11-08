#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int n,s,mid,mid1,ss,d,f1,f2;
int a[N],a1[N],a2[N];
char b[N],b1[N],b2[N];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		s+=a[i];
	}
	if(s%2==1){
		mid1=mid=s/2+1;
	}
	else{
		mid=s/2;
		mid1=s/2+1;
	}
	int len=0;
	for(int i=1;i<=n;i++){
		if(b[i]==b[i-1]){
			int ca=len;
			a1[len]+=a[i];
			b1[len]=b[i];
		}
		else{
			a1[++len]=a[i];
			b1[len]=b[i];
		}
	}
	if(len==1){
		cout<<0<<"\n";
		return 0;
	}
	int l=0,ffl=0;
	for(int i=1;i<=len;i++){
		d+=a1[i];
		//cout<<ffl<<"|||||||||"<<d<<" "<<mid<<"\n";
		if(d>=mid&&(!ffl)){
			//cout<<d-mid<<"|||"<<"\n";
			ffl=1;
			if(mid-(d-a1[i])-1&&s%2==1){
				a2[++l]=mid-(d-a1[i])-1;
				b2[l]=b1[i];
			}
			if(mid-(d-a1[i])&&s%2==0){
				a2[++l]=mid-(d-a1[i]);
				b2[l]=b1[i];
			}
			if(d-mid){
				a2[++l]=d-mid;
				b2[l]=b1[i];
			}
		}
		else{
			a2[++l]=a1[i];
			b2[l]=b1[i];
		}
	}
//	cout<<s<<" "<<mid<<" "<<l<<"\n";
	int ll=a2[1],rr=s-a2[l],i=1,j=l;
	while(ll<=rr){
		//cout<<ll<<" "<<rr<<"|||||||||"<<i<<" "<<j<<"|||||||"<<a2[i]<<" "<<a2[j]<<"\n";
		if(b2[i]!=b2[j]){
			ss+=min(a2[i],a2[j]);
		}
		if(a2[i]>a2[j]){
			j--;
			rr-=a2[j];
			a2[i]-=a2[j+1];
		}
		else if(a2[i]==a2[j]){
			j--;
			i++;
			rr-=a2[j];
			ll+=a2[i];
		}
		else{
			i++;
			ll+=a2[i];
			a2[j]-=a2[i-1];
		}
	}
	cout<<ss<<"\n";
	return 0;
}
//最多修改n/2次 
//Trick||Treat!
/*2
2 a
3 a*/
/*3
2 a
2 b
1 c*/
/*6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
