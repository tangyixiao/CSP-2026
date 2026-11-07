int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	long a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];	
	}
	long max=-1;
	for(int i=0;i<=n-4;i++)
	{
		if(max<(a[i]^a[i+1]^a[i+2]^a[i+3])) max=a[i]^a[i+1]^a[i+2]^a[i+3];
	}
	cout<<max;
	return 0;
}