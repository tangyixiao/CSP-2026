#include<bits/stdc++.h>
#define int long long 
#define endl '\n'
#define YUANSHEN ios_base::sync_with_stdio(0);
#define QIDONG cin.tie(0);
#define inf 1e14
#define mod 998244353
#define frein freopen("string.in","r",stdin);
#define freout freopen("string.out","w",stdout);
#define pii pair<int,int>
using namespace std;
const int maxn=1e6+10;

int a[maxn],n,ans=0,len=0,mid,totL=0,totR=0,La[maxn],Ra[maxn]; char c[maxn],Lc[maxn],Rc[maxn];

void Solve(int pos,int sum){
//	cout<<"Solve: "<<a[pos]<<" "<<c[pos]<<" "<<mid<<endl;
	if(len%2==0)
		++totL,La[totL]=mid-sum,Lc[totL]=c[pos],
		++totR,Ra[totR]=a[pos]+sum-mid,Rc[totR]=c[pos]
//		,cout<<"In Solve: "<<La[totL]<<" "<<Lc[totL]<<endl<<"         "<<Ra[totR]<<" "<<Rc[totR]<<endl
		;
	else 
		++totL,La[totL]=mid-sum-1,Lc[totL]=c[pos],
		++totR,Ra[totR]=a[pos]+sum-mid,Rc[totR]=c[pos]
//		,cout<<"In Solve: "<<La[totL]<<" "<<Lc[totL]<<endl<<"         "<<Ra[totR]<<" "<<Rc[totR]<<endl
		;
}

signed main(){
	YUANSHEN QIDONG
	frein freout
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>c[i],len+=a[i];
	mid=(len+1)>>1;
	for(int i=1,sum=0;i<=n;sum+=a[i],i++)
		if(sum<mid&&a[i]+sum>=mid)Solve(i,sum);
		else if(sum<mid)La[++totL]=a[i],Lc[totL]=c[i];
		else Ra[++totR]=a[i],Rc[totR]=c[i];
	int L=0,R=0,pl=0,pr=totR+1; char Nowl,Nowr;
	
//	cout<<"PL:"<<endl;
//	for(int i=1;i<=totL;i++)cout<<La[i]<<" "<<Lc[i]<<endl;
//	cout<<"PR:"<<totR<<endl;
//	for(int i=1;i<=totR;i++)cout<<Ra[i]<<" "<<Rc[i]<<endl;
	
	while(L<mid-(len%2)&&R<mid-(len%2)){
		if(L>R)Nowr=Rc[--pr]
//			,cout<<"R: "<<pr<<" "<<Nowr<<" "<<R<<" "<<(Nowl!=Nowr)*(max(min(Ra[pr],L-R),0LL))<<endl
			,ans+=(Nowl!=Nowr)*(max(min(Ra[pr],L-R),0LL)),R+=Ra[pr]
			;
		else if(R>L)Nowl=Lc[++pl]
//			,cout<<"L: "<<pl<<" "<<Nowl<<" "<<L<<" "<<(Nowl!=Nowr)*(max(min(La[pl],R-L),0LL))<<endl
			,ans+=(Nowl!=Nowr)*(max(min(La[pl],R-L),0LL)),L+=La[pl]
			;
		else Nowl=Lc[++pl],L+=La[pl];
	}
//	cout<<L<<" "<<R<<endl;
	while(R<mid-(len%2))Nowr=Rc[--pr],ans+=(Nowl!=Nowr)*(max(min(Ra[pr],L-R),0LL)),R+=Ra[pr]
//		,cout<<"R: "<<pr<<" "<<Nowr<<" "<<R<<" "<<(Nowl!=Nowr)*(max(min(Ra[pr],L-R),0LL))<<endl		
		;
	while(L<mid-(len%2))Nowl=Lc[++pl],ans+=(Nowl!=Nowr)*(max(min(La[pl],R-L),0LL)),L+=La[pl]
//		,cout<<"L: "<<pl<<" "<<Nowl<<" "<<L<<" "<<(Nowl!=Nowr)*(max(min(La[pl],R-L),0LL))<<endl
		;
	cout<<ans;
	return 0;
}