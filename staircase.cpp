#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


void printStairs(int n, int i){
	if (i==n+1) {
		return;
	} 
	cout << right<< setw(n-i+1);
	for (int j=-1; j<i-1; j++){
		cout << "#";	
	}
	if (i != 0) cout<< endl;
	printStairs(n, i+1);
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n=0;
    int i =0;
    cin>>n;
    printStairs(n, i);
    return 0;
}
