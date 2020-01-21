#include <bits/stdc++.h>
using namespace std;

int main()
{


	int n;
	vector <int>vec;
	cin>>n;
	if(n%2 != 0)cout<<"-1\n";
	else{
	for(int i=1;i<=n;i++){
		
		vec.push_back(i);
	}
	for(int i=0;i<n;i++){
		if(i%2==0){
		swap(vec[i],vec[i+1]);
	}
	}
	for(int i=0;i<n;i++){
		cout<<vec[i]<<" ";
	}
    
	 
	}
	
}
