# include <bits/stdc++.h>
using namespace std;

int rjz(int a){
	long long b[2000006],c=1,d=0;
	for(int i=1;a>=0;i++){
		b[i]=a%2;
		a-=b[i];
		a/2;
		d+=b[i]*c;
		c*=10;
	}
	return d;
}

int awy (int a, int b)
{
	int p=0;
	for(int i=10,j=a;j!=0;){
		j/=i;
		p++;
	}
	
	int c=0,d=10,e,f;
	for(int i=1;i<=p;i++){
		e=a%d;
		f=b%d;
		a/=d;
		b/=d;
		if(e && f){
			c+=1*d;
		}
		d*=10;
	}
	return c;
}

int sjz(int a){
	int p=0,q=0,w=1;
	for(int i=10,j=a;j!=0;){
		j/=i;
		p++;
	}
	for(int i=0;i<=p;i++){
		q+=a/w;
		a/=w;
		w*=10;
	}
	return q;
}

int main ()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdin);
	int n,m,a[200005],max=0,d1,d2,e,f;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}
	
	for(int i=1;i<=n;i++){
		d1=rjz(a[i]);
		for(int j=i;j<=n;j++){
			d2=rjz(a[j]);
			e=awy(d1,d2);
			cout<<e<<endl;
			f=sjz(e);
			cout<<f;
			if(f>max){
				max=f;
			}
		}
	}
	cout<<max;
}
