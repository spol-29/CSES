//Missing number
//WRONG SOLUTION so far TBC
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count = 0;
    cin >> n;
    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++){
            if(j == i){
                continue;
            }else if(j != i){
                count++;
            }
            if(count == n-1){
                cout << i;
                break;
            }

        }
    }	
}