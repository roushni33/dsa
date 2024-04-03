#include<iostream>
using namespace std;
int main(){
   //outer loop 
    for(int row=0;row<3;row++){
        //inner loop
        for(int col=0;col<5;col++){
            cout <<"* " ;
        }
        cout<<  endl;

    }
     //outer loop   
    for(int row=0;row<3;row++){
        //inner loop
        for(int col=0;col<3;col++){
            cout <<"* " ;
        }
        cout<<  endl;

    }
    //int n;
    //
        //int n;
        //cin >> n;
          
         int n;
         cin >> n;
         for(int i=0;i<n;i++){
            for(int j=0; j<i+1;j++){
                cout<< '*' ;
            }
            cout << endl;
         }
        
         for(int i=0;i<n;i++){
            for(int j=0; j<n-i;j++){
                cout<< '*' ;
            }
            cout << endl;
         }


        for(int i=0;i<n;i++){
            for(int j=1; j<n-i;j++){
                cout<< j ;
            }
            cout << endl;
         }
      for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<'*';
        }
        cout<<endl;
      }
      for (int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<< j+1;
        }
        cout<<endl;
      }
      for(int i=0;i<n;i++){
        if(i==0||i==(n-1)){
            for(int j=0;j<n;j++){
                cout<< '*';
            }

            }else{
                cout<<'*';
                for(int k=1;k<(n-2);k++){
                    cout<<' ';
                }
                cout <<'*';
            }
            cout << endl;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0||j==0||j==n-i-1){
                    cout<<'*';
                }
                else{
                    cout<<' ';
                }
            }
            cout<<endl;
        }
      }


    