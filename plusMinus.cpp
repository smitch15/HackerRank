#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    float i=0, den=0, pos=0, neg=0, zer=0;
    cin>>den;
    while(cin>>i){
        if (i>0) pos+=1;
        else if (i<0) neg+=1;
        else zer+=1;
    }
    cout<< fixed << setprecision(6)<<(pos/den)<<endl<<(neg/den)<<endl<<zer/den<<endl;
    return 0;
}
