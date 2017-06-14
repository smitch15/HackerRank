#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // arr[m+size-shift-1]
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int size=0, m=0, q=0, shf=0, i=0;
    cin>>size;
    long long int arr[size];
    cin>>shf;
    cin>>q;
    while(i<size){
        cin>>arr[i];
        //cout<<arr[i]<<endl;
        ++i;
    }
    i=0;
    while(cin>>m){
        //cout <<m<<endl<<size<<endl<<shf<<endl;
        i=m+size-shf;
        while(i>=size){
            i-=size;
        }
        while(i<0){
            i+=size;
        }
        cout<<arr[abs(i)]<<endl;
    }
    return 0;
}