#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int currentaadi = 0; int currentom = 0;
        int totalaadi = 0; int totalom =0;
         for (int i = 0; i<n; i++){
          if(a[i] > 0){
          currentom ++;
          
          if(currentom>totalom)
            totalom = currentom;
          }
              else { 
          currentom = 0;
          }
          

          //aaadi
          if(b[i] > 0){
            currentaadi ++;
          
            if(currentaadi>totalaadi)
              totalaadi = currentaadi;
            }
            else{ 
            currentaadi = 0;
            }
            
    }
	// your code goes 
     if (totalom > totalaadi){ 
     cout << "Om \n";
     }
     else if(totalaadi > totalom){ 
         cout<< "Addy \n" ;
     }
     else { 
        cout<< "Draw \n";
     }
     
    }
return 0;
}
