#include<bits/stdc++.h>
using namespace std;
struct s{
	long long  ci;
	char zi;
};
int main(){
	freopen("trave.in","r",stdin);
	freopen("trave.out","w",stdout);
	int n,sum=0;
	cin>>n;
	s s1[n+1];
	for(int  i=0;i<n;i++){
		cin>>s1[i+1].ci>>s1[i+1].zi;
		
	}
	for(int i=1;i<n;i++){
		int q=1,p=1;
		if(s1[q].zi!=s1[n+1-p].zi){
			sum=sum+min(s1[i].ci,s1[n-i].ci);
			if(s1[i].ci>s1[n-i].ci){
				s1[i].ci=s1[i].ci-s1[n-i].ci;
				s1[n-i].zi=s1[i].zi;
				p++;
			}else{
				s1[n-i].ci=s1[n-i].ci-s1[i].ci;
				s1[i].zi=s1[n-i].zi;
				q++;
			}
		}
	}
	cout<<sum;
	return 0; 
}
