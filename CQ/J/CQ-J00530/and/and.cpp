#include<bits/stdc++.h>
using namespace std;
int b[2000];
int x(int r){
	int a[1000];
	int w=r,i=0;
	while(w>0){
		a[i]=w%2;
		w/=2;
		i++;
	}
	long long ans=0,sum=1;
	for(int j=1;j<=i;j++){
		sum*=10;
	}
	for(int j=i;j>=0;j--){
		ans+=a[j]*sum;
		sum/=10;
	}
	return ans;
}
int y(int p,int q){
	int ans=0;
	long long sum=1;
	long long t=x(p);
	long long k=x(q);
	while(t!=0&&k!=0){
		int w=t%10,u=k%10;
		if(w==k&&w==1){
			ans+=sum*w;
		}
		sum*=10;
		t/=10,k/=10;
	}
	return ans;
}
int o(int d){
	int ee=1;
	for(int i=1;i<=d;i++){
		ee*=2;
	}
	return ee;
}
int z(int s){
	int l=0;
	int g=s;
	int c=1;
	l+=1*(g%10);
	g/=10;
	while(g>0){
		if(g%10==1){
			l+=o(c);
		}
		c++;
		g/=10;
	}
	return l;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	if(m==1){
		int ll=0;
		for(int i=1;i<=n;i++){
		   ll=max(b[i],ll); 
	    }
	    cout<<ll;
	    return 0;
	}else if(m==2){
		int we=0;
		int nuum=0;
		int yy=999999999;
		for(int i=1;i<=n;i++){
		    for(int j=i+1;j<=n;j++){
		    	if(abs(b[i]-b[j])<yy){
		    		we=i,nuum=j;
		    		yy=abs(b[i]-b[j]);
				}
			}
	    }
	    if(yy==0){
	    	cout<<b[we];
	    	return 0;
		}else{
			int popo=y(b[we],b[nuum]);
			cout<<z(popo);
			return 0;
		}
	}else{
		int we=b[1];
		for(int i=1;i<=n-1;i++){
		    we=y(we,b[i+1]);
	    }
	    cout<<z(we);
	}
}
