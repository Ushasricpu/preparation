# include <iostream>
using namespace std;


void sum(int n){
    n=n+10;
    cout<<n<<endl;
}

void sum_1(int &n){
    n=n+20;
    cout<<n<<endl;
}


int main(){
    int n=10;
    cout<<n<<endl;
    sum(n);
    cout<<n<<endl;
    sum_1(n);
    cout<<n<<endl;
}


//when arary paases it will pass by reference