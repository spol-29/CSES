//Repetitions
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
    cin >> s;
    int a = 0, c = 0, g = 0, t = 0;
    vector<int> dna_count (4);
    for(int i = 0; i < s.length(); i++){
        if(s[i] == s[i+1]){
            a = (s[i] == 'A') ? a+=1 : a+=0;
            c = (s[i] == 'C') ? c+=1 : c+= 0;
            g = (s[i] == 'G') ? g+=1 : g+= 0;
            t = (s[i] == 'T') ? t+=1 : t+=0;
            dna_count[0] = a;
            dna_count[1] = c;
            dna_count[2] = g;
            dna_count[3] = t;
        }
    }	
}