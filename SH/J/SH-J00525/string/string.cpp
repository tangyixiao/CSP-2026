#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;

long long l[N];
char s[N];
long long n,q[N];
long long ans;

bool check(){
	for(int i=1;i<=n/2;i++){
		if(l[i]==0||l[n-i+1]==0) continue;
		
		if(s[i]!=s[n-i+1]&&l[i]!=l[n-i+1]||s[i]!=s[i]!=s[n-i+1]){
			return false;
		}
	}
	return true;
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	bool f=1;
	for(int i=1;i<=n;i++){
		cin>>l[i];
		q[i]=q[i-1]+l[i];
		cin>>s[i];
		if(i!=1&&s[i]!=s[i-1]){
			f=0;
		}
	}
	
	if(f){
		cout<<0;
		return 0;
	}
	
	for(int i=1,j=n;i<=n/2;){
		//cout<<"第"<<i<<"次运行"<<endl; 
		if(check()){
			break;
		}
		while(l[i]==0){
			i++;
		}
		
		while(l[j]==0){
			j--;
		}
		
		if(s[i]!=s[j]){
		
			if(l[i]>l[j]){
				ans+=min(q[j]-q[i-1]-l[i],l[i]);
				//ans+=l[i];
				l[j]=l[i];
				int t=l[i]-l[j];
				int k=j-1;
				while(t!=0){
					//cout<<1
					if(l[k]>=t){
						l[k]-=t;
						t=0;
					}
					else{
						l[k]=0;
						t-=l[k];
						k--;
					}
				}
				i++,j--;
			}
			else{
				ans+=min(q[j]-q[i-1]-l[j],l[j]);
				//ans+=l[j];
				l[i+1]-=l[j]-l[i];
				int t=l[j]-l[i];
				int k=i+1;
				while(t!=0){
					//cout<<2;
					if(l[k]>=t){
						l[k]-=t;
						t=0;
					}
					else{
						l[k]=0;
						t-=l[k];
						k++;
					}
				}
				i++,j--;
			}
		}
		else{
			ans+=abs(l[i]-l[j]);
			if(l[i]>l[j]){
				int t=l[i]-l[j];
				int k=j-1;
				while(t!=0){
					//cout<<1;
					if(l[k]>=t){
						l[k]-=t;
						t=0;
					}
					else{
						l[k]=0;
						t-=l[k];
						k--;
					}
				}
			}
			else{
				int t=l[j]-l[i];
				int k=i+1;
				while(t!=0){
					//cout<<2;
					if(l[k]>=t){
						l[k]-=t;
						t=0;
					}
					else{
						l[k]=0;
						t-=l[k];
						k++;
					}
				}
				i++,j--;
			} 
		}
	}
	
	cout<<ans;
	return 0;
} 
