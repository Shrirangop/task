#include <bits/stdc++.h>

using namespace std;

int no_of_digits(int n){
    int count = 0, temp=n;
    while (temp != 0) {
        ++count;
        temp /=10 ;
    }
    
    return count;
}

void checkforarmstrong(int n){
    int b = no_of_digits(n);

    int temp = n;
    int sum = 0;

    while (temp!=0){
        sum += pow((temp%10),b);
        temp/=10;

    }

    if(sum == n) cout<<n<<" is an armstrong number"<<endl;
    else cout << "Not a Armstrong Number";
}

int main(){
    int n;
    cout<<"Enter a number to check"<<endl;

    cin>>n;

    checkforarmstrong(n);

    return 0;
}
