#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],s[300005],a1[500005],a2,s1[300005],qq[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(s,0,sizeof(s));
		for(int j=i;j<=n;j++){
			if(s[a[j]]==0){
				s1[a[j]]=a2;
				a1[a2]=a[j];
				s[a[j]]++;
				a2++;
			}else{
				for(int q=1;q<s1[a[j]];q++){
					a1[q]=0;
					s[a1[q]]=0;
					s1[a[q]]=0;
				}
				s1[a[j]]=a[j];
			}
		}
		for(int j=1;j<=a2;j++){
			if(a1[j]>0){
				qq[a1[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<qq[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
