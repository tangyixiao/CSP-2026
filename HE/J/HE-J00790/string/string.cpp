#include<bits/stdc++.h>
using namespace std;
struct st{
	long long le;
	char s;
};

const int N=2e5+10;
st a[N];
int letter[100]={0};

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	ios::sync_with_stdio(false);
	cin.tie(0);

	long long n,ans=0,cnt=0,block=0;
	int f=-1;
	cin>>n;
	block=n;
	long long tol=0;

	for (int i=1;i<=n;i++){
		cin>>a[i].le>>a[i].s;
		tol += a[i].le;

		int k=a[i].s-'a'+1;
		if (letter[k]==0){
			cnt++;
			letter[k]+=1;
		}

		if (i!=1){
			if (f==-1 && a[i].s!=a[i-1].s){
				f=1;
			}
		}
	}

	int left=1,right=n;
	while (block>1){
		long long p=a[left].le,q=a[right].le;
		long long m=abs(p-q);
		char x=a[left].s,y=a[right].s;

		if (x==y){
			if (p>q){
				right--;
				a[left].le-=m;
				block--;
			}

			else if (p<q){
				left++;
				a[right].le-=m;
				block--;
			}
			else if (p==q){
				left++;right--;
				block-=2;
			}

		}
		else{
			if (p>q){
				right--;
				a[left].le-=m;
				block--;
				ans += m;
			}
			else if (p<q){
				left++;
				a[right].le-=m;
				block--;
				ans+=m;
			}
			else if (p==q){
				left++;right--;
				block-=2;
				ans+=p;
			}
		}
	}


	if (f==-1 || cnt==1){
		cout<<0<<'\n';
		return 0;
	}
	cout<<ans<<'\n';


	return 0;
}
/*
 s i = s L+1?i
*/
