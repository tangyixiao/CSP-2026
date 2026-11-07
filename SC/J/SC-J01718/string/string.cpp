#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
long long int n[202500],m,sum,q[150000],h[150000],j,ji,ans,qf,hf,q1,h1,qi,hi,wf;
char c[202500],qc[150000],hc[150000],qc1,hc1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>m;
	for (int i=1;i<=m;i++){
		cin>>n[i]>>c[i];
		sum+=n[i];
	}
	while(j<(sum+1)/2){
		ji++;
		if(n[ji]+j>(sum+1)/2){
			q[ji]=(sum+1)/2-j;
			qc[ji]=c[ji];
			j=(sum+1)/2;
			qf=1;
		}else{
			q[ji]=n[ji];
			qc[ji]=c[ji];
			j+=n[ji];
			qf=0;
		}
	}
	j=0;
	ji=m;
	while(j<(sum+1)/2){
		if(n[m]+j>(sum+1)/2){
			h[m+1-ji]=(sum+1)/2-j;
			hc[m+1-ji]=c[ji];
			j=(sum+1)/2;
			hf=1;
		}else{
			h[m+1-ji]=n[ji];
			hc[m+1-ji]=c[ji];
			j+=n[ji];
			hf=0;
		}
		ji--;
	}
	qi=1;
	hi=1;
	q1=q[qi];
	qc1=qc[qi];
	h1=h[hi];
	hc1=hc[hi];
	while (!(hi==ji+hf+1 && qi==ji+qf+1)){
		if (q1>h1){
			if (qc1!=hc1){
				ans+=h1;
			}
			q1-=h1;
			hi++;
			h1=h[hi];
			hc1=hc[hi];
		}else if (q1<h1){
			if (qc1!=hc1){
				ans+=q1;
			}
			h1-=q1;
			qi++;
			q1=q[qi];
			qc1=qc[qi];
		}else{
			if (qc1!=hc1){
				ans+=q1;
			}
			qi++;
			q1=q[qi];
			qc1=qc[qi];
			hi++;
			h1=h[hi];
			hc1=hc[hi];
		}
		
	}
	cout<<ans;
	return 0;
}