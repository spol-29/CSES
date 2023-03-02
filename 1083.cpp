//Missing number
//WRONG SOLUTION so far TBC
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count = 0;
    cin >> n;
    vector<int> missing_number;
    for(int i = 0; i < n-1; i++){
        int x;
        cin >> x;
        missing_number.push_back(x);
    }
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
            }else{
                continue;
            }
        }
    }	
}