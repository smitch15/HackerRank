#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N, i, num, cnt=0, sum1 = 0, sum2=0, tot=0;
    cin>>N;
    int arr[N*N];
    while(cin>>num){
    	arr[cnt] = num;
    	cnt++;
    }
    for (cnt=0; cnt<N; cnt++){
    	sum1 += arr[(N+1)*cnt];
    	sum2 += arr[((N-1)*cnt)+(N-1)];
    }
    tot = abs(sum1 - sum2);
    cout << tot;
    return 0;
}
