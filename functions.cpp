#include<iostream>
using namespace std;

//function to add two numbers
//function to find max of three numbers
// int getmax(int a,int b,int c){
//     if(a>b&&a>c){
//         return a;
//     }else if(b>a&&b>c){
//         return b;
//     }else{
//         return c;

//     }




// int main(){
//     int a;
//     cout<<"enter a"<<endl;
//     cin>> a;
//     int b;
//     cout<<"enter b"<<endl;
//     cin>>b;
//     int c;
//     cout<<"enter c"<<endl;
//     cin >>c;
//     int max=getmax(a,b,c);
//     cout<<max<<endl;
//     return 0;
// }
//function to sum even no upto n
int sum_of_even(int n){
     int sum=0;

    for(int i=2;i<n;i=i+2){
       
        sum=sum+i;
        
       }
        return sum;
           
          
     
    
     
}


int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    
    int ans=sum_of_even(n);
    cout<<ans<<endl;
    
}