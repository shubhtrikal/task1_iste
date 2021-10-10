#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<string> A[t];
    for(int i = 0; i<t; i++){
        string s;
        cin>>s;
        A.push_back(s);
    }
    for(int i = 0; i<t; i++){
        int len = A[i].size();
        if(len%2==0){
            int a,b,c;
            a = count(A[i].begin(), A[i].end(), 'A');
            b = count(A[i].begin(), A[i].end(), 'B');
            c = count(A[i].begin(), A[i].end(), 'C');
            if(b==(a+c)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;

            }

        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}