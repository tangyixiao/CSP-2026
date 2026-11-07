#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+10;
int n;
struct node{
	ll num;
	char ch;
}str[N],L[N],R[N];
char nowl,nowr;
signed main(){
	cin.tie(0);cout.tie(0);
	ios::sync_with_stdio(false);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	ll sum=0;
	for(int i=1;i<=n;i++){
		cin>>str[i].num>>str[i].ch;
		sum+=str[i].num;
	} 
	ll mid=sum/2;
	if(sum%2==1) mid+=1;
	int pos=0;
	ll sum1=0;
	for(int i=1;i<=n;i++){
		sum1+=str[i].num;
		pos=i;
		if(sum1>=mid) break;
	}
	int cntl=0,cntr=0;
	R[++cntr]={sum1-mid,str[pos].ch};
	L[++cntl]={(sum%2==1?str[pos].num-R[cntr].num-1:str[pos].num-R[cntr].num),str[pos].ch};
	for(int i=pos-1;i>=1;i--) L[++cntl]=str[i];
	for(int i=pos+1;i<=n;i++) R[++cntr]=str[i];
	//for(int i=1;i<=cntl;i++) cout<<L[i].num<<' '<<L[i].ch<<'\n';
	//for(int i=1;i<=cntr;i++) cout<<R[i].num<<' '<<R[i].ch<<'\n';
	ll suml=0,sumr=0,posl=1,posr=1;
	ll ans=0;
	while(posl<=cntl || posr<=cntr){
		if(suml<=sumr){
			ll cha=sumr-suml;
			nowl=L[posl].ch;
			suml+=L[posl].num;
			if(nowl!=nowr) ans+=min(cha,L[posl].num);
			posl++;
		}else{
			ll cha=suml-sumr;
			nowr=R[posr].ch;
			sumr+=R[posr].num;
			if(nowl!=nowr) ans+=min(cha,R[posr].num);
			posr++; 
		}
	}
	cout<<ans;
	return 0;
}
