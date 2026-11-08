#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int N=1e6+10;

int len, sn;
int n, a[N];
char c[N];

struct node{
	int L, R;
	char c;
}cl[N], cr[N];
int lcl, lcr;
vector<int>vl, vr; //cl, cr需要被切断的位置 

int idl, idr;
node nl[N], nr[N]; 
int ans;



signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin>>n;
	for(int i=1; i<=n; i++) cin>>a[i]>>c[i];
	for(int i=1; i<=n; i++) len+=a[i];
	sn=len/2;

	for(int i=1, sum=0; sum<sn; i++)
	{
		lcl++;
		if(sum+a[i]<=sn)
		{	
			cl[lcl].L=sum+1;
			cl[lcl].R=sum+a[i];
			sum+=a[i];
			cl[lcl].c=c[i];
		}
		else 
		{
			int t=sn-sum;
			cl[lcl].L=sum+1;
			cl[lcl].R=sum+t;
			cl[lcl].c=c[i];
			sum+=t;
			a[i]-=t;
		}
	}

	
	for(int i=n, sum=0; sum<sn; i--)
	{
		lcr++;

		if(sum+a[i]<=sn)
		{	
			cr[lcr].L=sum+1;
			cr[lcr].R=sum+a[i];
			sum+=a[i];
			cr[lcr].c=c[i];
		}
		else 
		{
			int t=sn-sum;
			cr[lcr].L=sum+1;
			cr[lcr].R=sum+t;
			cr[lcr].c=c[i];
			sum+=t;
			a[i]-=t;
		}		
	}
	

	for(int i=1; i<=lcl; i++) vr.push_back(cl[i].R); //  R] [R+1
	for(int i=1; i<=lcr; i++) vl.push_back(cr[i].R);
	
	for(int i=1, j=1; i<=lcl; i++)
	{
		int L=cl[i].L;
		while(cr[j].R<cl[i].R)
		{
			++idl;	
			nl[idl].L=L;
			nl[idl].R=cr[j].R;
			nl[idl].c=cl[i].c;
			L=cr[j].R+1;
			j++;
		}
		if(cr[j].R==cl[i].R) j++;
		++idl;
		nl[idl].L=L;
		nl[idl].R=cl[i].R;
		nl[idl].c=cl[i].c;
	}
	
	for(int i=1, j=1; i<=lcr; i++)
	{
		int L=cr[i].L;
		while(cl[j].R<cr[i].R)
		{
			++idr;	
			nr[idr].L=L;
			nr[idr].R=cl[j].R;
			nr[idr].c=cr[i].c;
			L=cl[j].R+1;
			j++;
		}
		if(cl[j].R==cr[i].R) j++;
		++idr;
		nr[idr].L=L;
		nr[idr].R=cr[i].R;
		nr[idr].c=cr[i].c;
	}
	//Q 
	//for(int i=1; i<=idr; i++) cout<<nr[i].L<<" "<<nr[i].R<<" "<<nr[i].c<<endl;
	for(int i=1; i<=idr; i++)
	{
		if(nl[i].c!=nr[i].c) ans+=(nr[i].R-nr[i].L+1);
	}
	
	cout<<ans<<endl;
	
	
	
	
	
	
	return 0;
}
