#include<iostream>
using namespace std;
int N[200000];
bool M[200000][30];
int K[200000];
int P[200000];
int main()
{
	int n,m,k,c,o,l,z,s;
	bool u;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>N[i];
	}
	for(int i=0;i<n;i++)
	{
		k=0;
		
		while(N[i]>1)
		{
			if(N[i]%2==1){
				M[i][k]=1;
		    }
		    else{
		    	M[i][k]=0;
			}
			k+=1;
		}
		if(k>c){
			c=k;
		}
		K[i]=k;
	}
	return 0;
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(P[j]=z){
				
			
			if(K[j]>=s){
				if(M[j][K[i]-s]==1){
					o+=1;
					P[j]+=1;
					if(o>=m){
						u=1;
					}
				}
			}
			
		}
		}
		if(u==1){
			s-=1;
			z+=1;
		}
		else{
			s-=1;
			for(int j=0;j<n;j++)
			{
				P[j]--;
			}
		}
		
	}
		for(int j=0;j<n;j++)
		{
			if(P[j]=z){
				if(l==0)
				{
					l=N[j];
				}
			l=l&N[j];	
			
			
			
		}
		cout<<l;
}}
