#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[200010];
char c[200010];
signed main(){
	freopen("string".in,'r',std.in);
	freopen("string".out,'w',std.out);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i]>>c[i];
	int l=0;
	for(int i=1;i<=n;i++)
	l+=a[i];
	int x,bjjo;
	if(l%2==0){
		x=l/2;
		bjjo=0;
	}
	else{
		x=(l-1)/2;
		bjjo=1;
	}
	int ans=0,pans,iii=0,zo=0,yo=0;
	for(int i=1;i<=n;i++){
		ans+=a[i];
		if(ans>x&&bjjo==1){
			ans=x-(ans-a[i]);
			pans=a[i]-ans-1;
			iii=i;
		}
		else{
			ans=x-(ans-a[i]);
			pans=a[i]-ans;
			iii=i;
		}
	}
	char ch1,ch2;
	int zzans=0;
	for(int i=0,p=n+1;i<=p;){
		if(zo==0){
			i+=1; 
			ch1=c[i];
			if(i==iii)
			zo+=ans;
			else
			zo+=a[i];
		}
		if(yo==0){
			p-=1;
			ch2=c[p];
			if(i==iii)
			yo+=pans;
			else
			yo+=a[p];
		}
		int sum=min(zo,yo);
		if(ch1==ch2){
			zo-=sum;
			yo-=sum;
		}
		else{
			zo-=sum;
			yo-=sum;
			zzans+=sum;
		}
		if((i==p)||(i+1==p&&zo==0&&yo==0))
		break;
	}
	cout<<zzans;
	return 0;               
}