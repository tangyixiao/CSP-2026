#include<bits/stdc++.h>
using namespace std;
int n,str[200005],typ[200005],a,t,w;
long long ans;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		str[i]=a;
		typ[i]=c-'a';
	}
	t=1,w=n;
	while(t<w){
		if(typ[t]==typ[w]){
			if(str[t]<str[w]){
				str[w]-=str[t];
				str[t]=0;
				t++;
			}
			else if(str[t]==str[w]){
				str[w]=0;
				str[t]=0;
				t++;
				w--;
			}
			else{
				str[t]-=str[w];
				str[w]=0;
				w--;
			}
		}
		else{
			if(str[t]<str[w]){
				ans+=str[t]; 
				str[w]-=str[t];
				str[t]=0;				
			    t++;
			}
			else if(str[t]==str[w]){
				ans+=str[t];
				str[w]=0;
				str[t]=0;
				t++;
				w--;
			}
			else{
				ans+=str[w];
				str[t]-=str[w];
				str[w]=0;	
				w--;
			}
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
