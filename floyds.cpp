#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Please Enter Number Of rows To Be Printed"<<endl;
    int n;
    cin>>n;
    int s=1;
    for(int i= 0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<s++<<' ';
        }
        cout<<endl;
    }
}