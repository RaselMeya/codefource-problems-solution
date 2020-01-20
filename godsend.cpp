#include <bits/stdc++.h>


using namespace std;

int main()
{
     long long int n,pos=0;;
    cin>>n;
     long long int arr[n];
    for(long long i=0;i<n;i++){
    cin>>arr[i];

    }
    for(long long  i=0;i<n;i++){
    	if(arr[i]%2!=0){
    		pos++;
    	}
    }
    if(pos > 0)cout<<"First\n";
    else{
    	cout<<"Second\n";
    	}


}

