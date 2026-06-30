#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
  

  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  
  int maxlength =0;

  //generating all subarrays
  for(int i=0;i<n;i++){
    vector<int> freq(101,0);
    for(int j=1;j<n;j++){
      freq[arr[j]]++;
    }
  }

  }
  return 0;
}