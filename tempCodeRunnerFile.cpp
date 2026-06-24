#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int ans =0;

    for(int i=0;i<n;){
      if(s[i]== '#'){
        i++;
        continue;
      }

      int len =0;

      while(i<n&&s[i]=='.'){
        len++;
        i++;
      }

      if(len==1){
        ans =ans+1;
      }else{
        ans= ans+2;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}