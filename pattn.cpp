#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0||j==n-i-1){
                cout<<'*';
            }else{
                cout<< ' ';
            }
        }
        cout<< endl;
    } 
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<n-i-1){
                cout << j+1 ;
            } else{
                cout << " ";
            }
        }
        cout << endl;
     }
     for(int i=0;i<n;i++){
        int k=0;
        for(int j=0;j<(2*n-1);j++){
            if(j<n-i-1){
                cout <<" ";
            }else if(k<i+1){
                cout << "* ";
                k++;
            } else {
                cout <<" ";
            }
        }
        cout << endl;
     }
     for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1;j++){
            cout << " ";
        }
           for(int j=0;j<2*i+1;j++){
            if(j==0||j==2*i){
                cout<<"* ";
            }else{
                cout <<" ";  
            }
           }
        cout << endl;
     }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<i){
                cout << " ";
            }else{
                cout <<"* ";
            }
        }
        cout << endl;
     }
     for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*n-2*i-1);j++){
           if(j==0||j==2*n-2*i-2){
            cout<<"*";
           }else{
            cout<<" ";

           }
        }
        cout << endl;
     }
     for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout << endl;
     }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<i){
                cout<<" ";
            }else{
                cout<<"*";
            }
            
        }
        cout << endl;
     }
     for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout <<"*";
        }
        for(int j=0;j<2*i+1;j++){
            cout <<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout << endl;
     }

      for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout <<"*";
        }
        for(int j=0;j<2*n-2*i-1;j++){
            cout <<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout << endl;
     }
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<i+1 ;
            if(j!=i){
                cout<<"*";
            }
        }
        cout <<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<n-i ;
            if(j!=n-i-1){
                cout<<"*";
            }

        }
        cout <<endl;
    }
   for(int i=0;i<n;i++){
    
    int j;
    for(int j=0;j<(i+1);j++){
        int ans=j+1;
        char ch=ans+'A'-1;
       cout<<ch;
    }
    
    for(int j=i;j>=1;j--){
        int ans=j;
        char ch=ans+'A'-1;

        cout <<ch;
    }
    
    
     cout<<endl;
   }
   for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        cout <<" ";
    }
    for(int j=0;j<i+1;j++){
        cout <<i+j+1;
    }
    for(int j=i;j>=1;j--){
        cout<<j+1;
    }
    cout<<endl;
   }
   for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        cout<<" ";

    }
    int start=1;
    
    for(int j=0;j<2*i+1;j++){
        if(j==0||j==2*i){
            if(j%2==0){
                cout<<start;
                start++;
            }else{
                cout<<" ";
            }
           
        }

        else{
            if(j==0){
                cout<<"1";
            }else if(j==2*i){
                cout<<i+1;
            }else{
                cout<<" ";
            }
        }
    }
    cout<<endl;
   }
   int a=6;
   int b=(++a)*(++a);
   cout<<b<<endl;
   
}

                
            