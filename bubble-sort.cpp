/*********************************************************************

 Bubble sort

********************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n, a[n];
    
    cout<<"Enter Size Of Array :";
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int count = 1;
    
    while(count<n){
       // cout<<"Minus :"<<n-count;
        for(int i=0;i<n-count;i++){
            if(a[i]>a[i+1]){
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
            
        }  
        count++;
    }
    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}
