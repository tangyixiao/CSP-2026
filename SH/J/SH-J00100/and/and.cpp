//4 2 3 15 12 12
#include<bits/stdc++.h> 
using namespace std;

typedef unsigned long long ull;
ull mi[35],a[200005],ans=0,Max=0;
int n,m;
string change(ull x){
	string s="";
	while(x>0){
		s+=x%2+'0';
		x/=2;
	}
	reverse(s.begin(),s.end());
	return s;
}
ull add(string x,string y){
	ull sum=0;
	for(int i=min(x.size(),y.size())-1;i>=0;i--){
		if(x[i]=='1'&&y[y.size()-x.size()+i]=='1'){
			sum+=mi[min(x.size(),y.size())-i-1];
		}
	}
	return sum;
}
void dfs(int t,int pos,ull sum,bool flag){
	if(t==m){
		ans=max(ans,sum);
		//cout<<pos<<" "<<t<<" "<<sum<<endl;
		return ;
	}
	if(pos>n){
		return ;
	}
//	cout<<pos<<" "<<t<<" "<<sum<<endl;
	dfs(t,pos+1,sum,flag);
	if(sum==0&&flag){
		sum=a[pos];
	}
	else{
		sum=add(change(sum),change(a[pos]));
	}
//	cout<<pos<<" "<<t+1<<" "<<sum<<endl;
	dfs(t+1,pos+1,sum,false);
	return ;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	mi[0]=1;
	for(int i=1;i<=30;i++){
		mi[i]=mi[i-1]*2;
	}
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		Max=max(Max,a[i]);
	}
	
	if(n<=20){
		ull sum=0;
		dfs(0,1,sum,true);
		cout<<ans<<endl;
	}
	else if(m==1){
		cout<<Max<<endl;
	}
	else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=add(change(ans),change(a[i]));
		}
		cout<<ans<<endl;
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,add(change(a[i]),change(a[j])));
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
