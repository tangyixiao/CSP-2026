#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
struct stt{
	int m;
	char c;
}a[200009];
int ans;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int tcnt=0;
	for(int i=1;i<=n;i++){cin>>a[i].m>>a[i].c;tcnt+=a[i].m;}
	int tta=0,ttb=0,ta=0,tb=0;
	if(tcnt%2==0){tta=tcnt/2;ttb=tta+1;}
	else{tta=tcnt/2+1;ttb=tta;}
	int ttcnt=0;
	for(int i=1;i<=n;i++){
		if(ttcnt+a[i].m>=tta&&ta==0) ta=i;
		if(ttcnt+a[i].m>=ttb&&tb==0) tb=i;	
		ttcnt+=a[i].m;
	}
	int cnta=0,cntb=0;
	int l,r;
	for(int i=0,j=n+1;i<ta||j>tb;){
		if(cnta==cntb){
			if(i+1<ta&&j-1>tb){
				i++,j--;
				if(a[i].c!=a[j].c){
					ans+=min(a[i].m,a[j].m);
				}
				
			}
			else if(i+1<ta) i++;
			else if(j-1>tb) j--;
			cnta+=a[i].m;
			cntb+=a[j].m; 
		}
		else if(cnta<cntb){
			if(i+1<ta){
				i++;
				if(a[i].c!=a[j].c){
					if(cnta+a[i].m>cntb) ans+=cntb-cnta;
					else if(cnta+a[i].m==cntb) ans+=a[i].m ;
					else ans+=a[i].m;
				}
				cnta+=a[i].m;
			} 
			if(i+1==ta){
				if(j-1>tb) j--;
				if(a[ta].c!=a[j].c){
					if(cntb+a[j].m>cnta) ans+=cnta-cntb;
					else if(cntb+a[j].m==cnta) ans+=a[j].m ;
					else ans+=a[j].m;
				}cntb+=a[j].m;
			}
		}
		else{
			if(j-1>tb){
				j--;
				if(a[i].c!=a[j].c){
					if(cntb+a[j].m>cnta) ans+=cnta-cntb;
					else if(cntb+a[j].m==cnta) ans+=a[j].m ;
					else ans+=a[j].m;
				}
				cntb+=a[j].m;
			} 
			if(j-1==tb){
				if(i+1<ta)i++;
				if(a[i].c!=a[tb].c){
					if(cnta+a[i].m>cntb) ans+=cntb-cnta;
					else if(cnta+a[i].m==cntb) ans+=a[i].m ;
					else ans+=a[i].m;
				}cnta+=a[i].m;
			}
		}
		l=i,r=j;
	//	cout<<cnta<<" "<<cntb<<" "<<i<<" "<<j<<" "<<a[i+1].m<<" "<<a[j-1].m<<endl;
		//cout<<cnta<<" "<<cntb<<endl;
		if((i==ta-1&&j==tb+1)||i>ta||j<tb) break;
	}
	if(l==0) l++;
	if(r==n+1) r--;
	if(a[ta].c!=a[tb].c){
		if(cnta>cntb){
			if(a[tb].c!=a[l].c) ans+=a[tb].m;
		}
		else if(cnta<cntb){
			if(a[ta].c!=a[r].c) ans+=a[ta].m;
		}
		else ans+=a[ta].m;
	}
	else {
		if(cnta>cntb){
			if(a[ta].c!=a[l].c)ans+=cnta-cntb;
		}
		else if(cnta<cntb) if(a[ta].c!=a[r].c)ans+=cntb-cnta;
	}
	cout<<ans;
	return 0;
} 
