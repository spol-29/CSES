#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k;	
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b (m);
    for(int &x:n){
        int applicants;
        cin >> applicants;
        a.push_back(applicants);
    }
    for(int &y:m){
        int size;
        cin >> size;
        b.push_back(size);
    }
    for(int &i:n){
        for(int&j:m){
            int bj = b[j];
            cout << bj;
            b.push_back(bj);
        }
    }
}