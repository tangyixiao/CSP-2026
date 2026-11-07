#include<bits\stdc++.h> 
using namespace std;
int a[200000];
long long n,m,c=-1,ans=-1,sum=1;long long f=1,as=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);

	}
	for(int i=0;i<n;i++){
		sum*=2;
	}
	for(int i=0;i<sum;i++){
		int cnt=0;
		c=-1;
		f=1;	
		as=0;				
			for(int j=0;f<=i;j++){	//cout<<(i&f)<<endl<<endl<<endl;
			if((i&f)==f){
				if(as==0){
					c=a[j];	
					as=1;cnt++;	
				}
				c=(c&a[j]);
				cnt++;
			if(cnt>m){
				break;
			}	
			}f*=2;
			}
				
				if(m==cnt)ans=max(ans,c);
			
			

		}
		
	cout<<ans;
	return 0;
}
