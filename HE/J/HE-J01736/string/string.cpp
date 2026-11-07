#include<bits/stdc++.h>
using namespace std;
int n;
long long ans;
long long l;
long long cnt=0;
struct ss{
	long long shu;
	string fu;
}a[200010];
int main(){
	freopen("string","r",stdin);
	freopen("string","w",stdout);
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>a[i].shu>>a[i].fu;
	}
	    int i=1;
		int j=n;
		while((a[i].shu!=0&&a[j].shu!=0)&&(i<=n&&j>=1)){
			long long lin=min(a[i].shu,a[j].shu);
			//cout<<lin<<endl;
			if(i!=j){
			a[i].shu=a[i].shu-lin;
			a[j].shu=a[j].shu-lin;
			}else{
			a[i].shu-=lin;	
		    }
			if(a[i].fu!=a[j].fu){
				ans+=lin;
			}
			if(a[i].shu==0)i++;
			if(a[j].shu==0)j--;
		}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
