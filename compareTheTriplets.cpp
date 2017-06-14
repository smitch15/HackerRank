#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int arr[6], i, aval=0, bval=0, count=0;
    while (cin>>i){
    	arr[count] = i;
    	count++;
    }
    for (i=0; i<3; i++){
        if (arr[i]>arr[i+3]) aval+=1;
        if (arr[i]<arr[i+3]) bval+=1;
    }
    cout<<aval<<" "<<bval;
    return 0;
}

// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
//     int a[3], b[3], i, count, aval=0, bval=0;
//     count=0;
//     while (cin>>i){
//     	if (count < 3){
//     		a[count] = i;
//     	}
//     	else{
//     		count -= 3;
//     		b[count] = i;
//             count += 3;
//     	}
//     	count++;
//     }
//     for (i=0; i<3; i++){
//         if (a[i]>b[i]) aval+=1;
//         if (a[i]<b[i]) bval+=1;
//     }
//     cout<<aval<<" "<<bval;
//     return 0;
// }