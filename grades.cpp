#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Please Enter The Marks You Want Grades Of"<<endl;
    int marks;
    cin>>marks;
    switch (marks/10){
        case 10:
        cout<<"A"<<endl;
        break;
        case 9:
        cout<<"A"<<endl;
        break;
        case 8:
        cout<<"B"<<endl;
        break;
        case 7:
        cout<<"C"<<endl;
        break;
        case 6:
        cout<<"D"<<endl;
        break;
        case 5:
        cout<<"E"<<endl;
        break;
        case 4:
        cout<<"F"<<endl;
        break;
        default:
        cout<<"F"<<endl;
        break;
    }
}