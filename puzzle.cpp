#include <bits/stdc++.h>
using namespace std;

int main()
{
	  int n,m;
	  cin>>n>>m;
	  int arr[m];
	  for(int i=0;i<m;i++){
	  	cin>>arr[i];
	  }
	  sort(arr,arr+m);
	  int best=INFINITY;
	  for(int i=0;i<=m-n;i++){
	  	best = min(best, arr[i+n-1] - arr[i]);
	  }
	  cout<<best<<endl;
}
