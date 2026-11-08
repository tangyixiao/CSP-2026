#include<bits/stdc++.h>
using namespace std;
struct node{
	int sl;
	long long wz;
	char zm;
}a[200050];
int main(){
	freopen("string.cpp","r",stdin);
	freopen("string.cpp","w",stdout);
	int n;
	bool f=0;
	long long dss=0,x=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].sl>>a[i].zm;
		a[i].wz=dss;
		dss+=a[i].sl;
	}
	if(dss%2!=0)f=1;
	long long r=dss,l=0,yb=dss+f;
	int al=0,ar=n-1;
	while(r>l&&ar>=al){	
		if(r-a[ar].sl<=yb&&l+a[al].sl>=yb){
			x+=min(yb-l-a[al].sl,r-a[ar].sl-yb);
			break;
		}
		else if(a[ar].zm!=a[al].zm){
			if(a[al].sl>a[ar].sl){
				x+=a[ar].sl;
				a[al].sl-=a[ar].sl;
				ar--;
				r-=a[ar].sl;
				l+=a[ar].sl;
			}
			else if(a[al].sl<a[ar].sl){
				x+=a[al].sl;
				a[ar].sl-=a[al].sl;
				al++;
				r-=a[al].sl;
				l+=a[al].sl;
			}
			else {
				x+=a[al].sl;
				al++;
				ar--;
				r-=a[al].sl;
				l+=a[al].sl;
			}
		}
		else{
			if(a[al].sl>a[ar].sl){
				ar--;
				r-=a[ar].sl;
				l+=a[ar].sl;
			}
			else if(a[al].sl<a[ar].sl){
				al++;
				r-=a[al].sl;
				l+=a[al].sl;
			}
			else {
				al++;
				ar--;
				r-=a[al].sl;
				l+=a[al].sl;
			}
		}
	}
	cout<<x;
	return 0;	
} 
