#include<bits/stdc++.h>
using namespace std;
//n=4
//1 a
//3 b
//2 c

struct ST{
	long long amount;
	char eng;
};

ST s[100005];

long long index=1; 

void ins(long long location , long long amounta , char enga){
	for(long long i=index;i>=location;i--){
		s[i].amount=s[i-1].amount;
		s[i].eng=s[i-1].eng;
	}
	s[location].amount=amounta;
	s[location].eng=enga;
	index++;
	return;
}

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	for(long long i=1;i<=n;i++){
		long long a;
		char e;
		cin>>a>>e;
		if(e==s[index-1].eng){
			s[index-1].amount+=a;
		}
		else{
			s[index].eng=e;
			s[index++].amount=a;
		}
	}
	long long ans=0;
	for(long long i=1;i<=index;i++){
		if(s[i].amount==s[index-i].amount){
			if(s[i].eng!=s[index-i].eng){
				ans+=s[i].amount;
				s[i].eng=s[index-i].eng;
			}
		}
		else if(s[i].amount<s[index-i].amount){
			//2 a
			//1 b
			//3 c
			//=>
			//2 c
			//1 b
			//1 c
			//2 c
			if(s[i].eng==s[index-i].eng){
				long long ori=s[index-i].amount;
				s[index-i].amount=s[i].amount;
				ins(index-i,(ori-s[i].amount),s[i].eng);
			}
			else{
				long long ori=s[index-i].amount;
				s[i].eng=s[index-i].eng;
				ans+=s[i].amount;
				s[index-i].amount=s[i].amount;
				ins(index-i,(ori-s[i].amount),s[index-i].eng);
			}
		}
		else if(s[i].amount>s[index-i].amount){
			//3 a
			//1 b
			//2 c
			//=>
			//2 a
			//1 a
			//1 b
			//2 a
			if(s[i].eng==s[index-i].eng){
				long long ori=s[i].amount;
				s[i].amount=s[index-i].amount;
				ins(i,(ori-s[index-i].amount),s[i].eng);
			}
			else{
				long long ori=s[i].amount;
				s[index-i].eng=s[i].eng;
				ans+=s[index-i].amount;
				s[i].amount=s[index-i].amount;
				ins(i,(ori-s[index-i].amount),s[i].eng);
			}
		}
		/*for(int i=1;i<index;i++){
			cout<<s[i].eng<<s[i].amount<<endl;
		}
		cout<<"---"<<endl; //bug checking
		*/
	}
	cout<<ans;
	return 0;
}
