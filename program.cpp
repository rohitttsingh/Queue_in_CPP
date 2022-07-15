// { Driver Code Starts
#include <c++/v1/bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for(int rear = 0; rear<n ;rear++){
        cout<<arr[rear]<<" ";
    }
    
}
void insert(int arr[], int rear, int data){
    arr[rear] = data;
}

void remove(int arr[], int *n){
    if(*n<=0)
    {
        cout<<"Underflow\n\n";return;
    }
    for(int rear = 0; rear<*n ;rear++){
        arr[rear] = arr[rear+1];
    }
    
    *n=*n-1;
    return;
}

void front(int arr[],int n){
    
    cout<<"\nFront element is "<<arr[0]<<endl<<endl;
}

void search(int arr[], int a, int n){
    bool flag = false; int i;
    for(i=0;i<n;i++){
        if(arr[i]==a)
        { flag=true; break;}
    }
    
    cout<<((flag)? "Found \n" :"Not Found\n");
    
}

int main(){
   
    int arr[10] ;
    cout<<"Enter 10 data\n";
    
    for(int rear =0; rear<10 ;rear++){
        int data;
        cin>>data;
        insert(arr,rear,data);
    }
    
    int n = sizeof(arr)/sizeof(int);
    cout<<endl;
    cout<<endl;

    print(arr,n);
    cout<<endl;
    
    cout<<"\nSearching for 34\n";
    search(arr,34,n);
    
    remove(arr,&n);
    cout<<endl;

    print(arr,n);
    cout<<endl;
    
    remove(arr,&n);
    cout<<endl;

    print(arr,n);
    cout<<endl;
    
    remove(arr,&n);
    cout<<endl;

    print(arr,n);
    cout<<endl;
    
    
    front(arr,n);

    return 0;
}
        
