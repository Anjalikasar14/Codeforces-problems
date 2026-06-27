#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;

    string x,s;
    cin>>x;
    cin>>s;

    int count=0;
    bool found = false;

    while(x.size()<s.size()){
      x=x+x;
      count++;
    }
    
    for(int i=0;i<3;i++){
      if(x.find(s) != string::npos){
        cout<<count<<"\n";
        found=true;
        break;
      }
      x=x+x;
      count++;
    }
    if(!found){
      cout<<-1<<"\n";
    }
}
return 0;
  
}