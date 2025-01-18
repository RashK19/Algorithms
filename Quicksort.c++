#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n=5;
	int a[n];
	for(int i=0;i<n;i++){
	    cin >>a[i];
	}

    int p=0,r=n-1,q;
    int x=a[r];
    cout<<x <<endl;
    int i=p-1;
    cout <<i <<endl;
    for(int j=p;j<r;j++){
        if(a[j]<=x){
            i=i+1;
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        
        for(int k=0;k<n;k++){
	    cout <<a[k] <<" ";
	    }
	    cout <<endl;
    }
    cout <<endl;
    int temp=a[i+1];
    a[i+1]=a[r];
    a[r]=temp;
    q=i+1;
    for(int k=0;k<n;k++){
	    cout <<a[k] <<" ";
	    }
	cout <<endl;
    cout <<"q= " <<q;
}
