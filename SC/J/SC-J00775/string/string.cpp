#include<iostream>
long long i=1,t=1,j=1,ans=0,total=0,b[202000],n,a[202000];
char c[202000],d[202000];
int main(){
	std::cin>>n;
	for(i=1;i<=n;i++){
		std::cin>>a[i]>>c[i];
		if(c[i]==c[i-1]){
			a[i]+=a[i-1];
			a[i-1]=0;
		}
	}
	i=1;
	while(i<=n){
		if(a[i]!=0){
			total++;
			b[t]=a[i];
			d[t]=c[i];
			t++;
		}
		i++;
	}
	i=1;
	j=1;
	while(i<=total/2){
		if(d[i]!=d[total-j+1]){
			if(b[i]>b[total-j+1]){
				ans+=b[total-j+1];
				b[i]-=b[total-j+1];
				j++;
			}
			else if(b[i]<b[total-j+1]){
				ans+=b[i];
				b[total-j+1]-=b[i];
				i++;
			}
			else{
				ans+=b[i];
				i++;
				j++;
			}
		}
		else{
			if(b[i]>b[total-j+1]){
				b[i]-=b[total-j+1];
				j++;
			}
			else if(b[i]<b[total-j+1]){
				b[total-j+1]-=b[i];
				i++;
			}
			else{
				i++;
				j++;
			}
		}
	}
	std::cout<<ans;
	return 0;
}