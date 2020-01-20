#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k,sum=0,sum1=0,kk=1;
    cin>>n >>k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int ko=k+1;
    int ki=k;
    while(ko--)
    {
        sum=0;
        sum1=0;
        for(int j=0; j<n; j++)
        {
            sum=sum+pow(arr[j],2);
            sum1=sum1+arr[j];
        }
        cout<<sum<<" " <<sum1<<endl;

        if(sum<=sum1)
        {

            cout<<"YES"<<endl;
            break;
        }
        else if(sum>sum1  &&  kk<=ki)
        {
            for(int ai=n; ai>0; ai--)
            {
                if(arr[ai -kk]>1)
                {
                    arr[ai-kk]=1;
                    kk++;
                }
                else
                {
                    kk++;
                }
            }


        }


        else
        {
            cout<<"NO"<<endl;
        }


    }




}
