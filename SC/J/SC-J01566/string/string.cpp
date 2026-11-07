#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	long long a,ways=0,q;
	cin>>a;
	char an[a];
	int ji[a];
	for(int i=1;i<=a;i++){
		cin>>ji[i]>>an[i];
	}
	for(int i=1;i<=a/2;i++){
		q=a+1-i;
		if(ji[i]>ji[q]){
			if(an[i]==an[q]){
				ways+=ji[i]-ji[q];
				ji[a-i]=ji[a-i]-ji[i]+ji[q];
			}
			else{
				ways+=ji[i];
			    ji[a-i]=ji[a-i]-ji[i]+ji[q];
			}
		}
		else if(ji[i]<ji[q]){
			if(an[i]==an[q]){
				ji[a-i]=ji[a-i]+ji[i]-ji[q];
			}
			else{
				ways+=ji[i];
			    ji[a-i]=ji[a-i]+ji[i]-ji[q];
			}
		}
		else if(ji[i]==ji[a+1-i]){
			if(an[i]!=an[q]){
				ways+=ji[i];
			}
		}
	}
	cout<<ways;
	return 0;
} 