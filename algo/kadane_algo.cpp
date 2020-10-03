#include<bits/stdc++.h>
using namespace std;

int findmaxsum(int arr[],int n)
{
  int max_till=0;
  int max_all=INT_MIN;
  for(int i=0;i<n;i++)
  {
    max_till+=arr[i];
    if(max_till>max_all)
      max_all=max_till;
     if(max_till<0)
      max_till=0;
  }
  return max_all;
}

int main()
{
  int arr[]={-5,4-8,2,3,5,-4};
  int n=7;
  cout<<findmaxsum(arr,n);
  return 0;
}
