#include<bits/stdc++.h>
using namespace std;
long long n,a[1000001]={},a1[1000001]={},a2[1000001]={};
char s[1000001],s1[1000001],s2[1000001];
long long cnt=0,b[1000001]={},m=0,ans=0;
long long l=0,r=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
		b[i]=b[i-1]+a[i];
		//cout<<a[i]<<endl;
	}
	m=b[n]/2;
	for(int i=1;i<=n;i++){
		if(m>b[i-1]&&m<=b[i]){
			if(b[n]%2==1){
				if(m==b[i]){
					a[i+1]--;
					b[i+1]--;
				}
				else {
					a[i]--;
					b[i]--;
				}
				b[n]--;
			}
			for(int j=1;j<i;j++){
				a1[j]=a[j];
				s1[j]=s[j];
				//a2[j]=a[n+1-j];
			}
			for(int j=n;j>i;j--){
				a2[n+1-j]=a[j];
				s2[n+1-j]=s[j];
			}
			l=i,r=n+1-i;
			a1[i]=m-b[i-1];
			a2[r]=b[i]-m;
			s1[i]=s[i];
			s2[r]=s[i];
		}
	}
	/*for(int i=1;i<=l;i++){
		cout<<a1[i]<<" "<<s1[i]<<endl;
	}
	cout<<"--------"<<endl;
	for(int i=1;i<=r;i++){
		cout<<a2[i]<<" "<<s2[i]<<endl;
	}*/
	long long i1=1,i2=1;
	long long a11=a1[1],a22=a2[1];
	while(i1<=l&&i2<=r){
		if(s1[i1]==s2[i2]){
			if(a11==a22){
				i1++;
				i2++;
				a11=a1[i1];
				a22=a2[i2];
			}
			else if(a11<a22){
				a22-=a11;
				i1++;
				a11=a1[i1];
			}
			else{
				a11-=a22;
				i2++;
				a22=a2[i2];
			}
			continue;
		}
		if(a11>a22){
			ans+=a22;//cout<<a22<<"  ----------------"<<endl;
			a11-=a22;
			i2++;
			a22=a2[i2];
		}
		else if(a11<a22){
			ans+=a11;
			a22-=a11;
			i1++;
			a11=a1[i1];
		}
		else{
			ans+=a11;
			
			i1++;
			i2++;
			a11=a1[i1];
			a22=a2[i2];
		}
		//cout<<ans<<endl;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
