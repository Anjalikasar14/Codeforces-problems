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

    int dots = 0;
    bool bigSegment = false;


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

      dots = dots+len;
      if(len>2){
        bigSegment=true;
      }
    }

    if(bigSegment){
      cout<<2<<endl;
    } else{
      cout<<dots<<endl;
    }
  }
  return 0;
}