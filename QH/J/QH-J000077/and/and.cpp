#include<bits\stdc++.h>
using namespace std;
int a[100005];
int t1(int a){
	int b[100000],i=1;
	while(1){
		if(a==0){
			break;
		}
		b[i]=a%2;
		a=a/2;
		i++;
		
	}
	int c=0;
	for(i;i>=1;i--){
		c=c*10+b[i];
	}
	return c;
}
//转成10进制 
int t2(int a){
	int sum=0,s=0;
	//a%10*2^sum;
	while(1){
		if(a==0) break;
		s+=a%10*pow(2,sum);
		a=a/10;
		sum++;
		
	}
	return s;
}
int t3(int a,int b){
	a=t1(a);
	b=t1(b);
	//cout<<a<<" "<<b<<" "; 
	int c[99999],i=1,d=0;
	while(1){
		if(a==0 && b==0){
			break;
		}
		if(a%10==b%10 && a%10==1){
			c[i]=1;
		}
		else{
			c[i]=0;
		}
		a=a/10;
		b=b/10;
		i++;
	}
	for(int j=i;j>=1;j--){
		d=d*10+c[j];
	}
	//cout<<d<<" ";
	return t2(d);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ma=0,s=-1;
	cin>>n>>m;
	
	cin>>a[1];
	for(int i=2;i<=n;i++){
		cin>>a[i];	
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			//cout<<a[i]<<" "<<a[j]<<" "<<t3(a[i],a[j])<<endl;
			ma=max(ma,t3(a[i],a[j]));
		}	
	}
	cout<<ma;
	/*int n;
	cin>>n;
	cout<<t1(n)<<endl;
	cout<<t2(t1(n));*/
	return 0;
} 
