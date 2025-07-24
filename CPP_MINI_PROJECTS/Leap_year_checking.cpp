#include<iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter year: ";
    cin >> year;
    if (year % 4 == 0){
        cout<<"=========================================="<<endl;
        cout << year <<" is a leap year"<<endl;
        cout << "==========================================" << endl;
    }
    else{
        cout << "==========================================" << endl;
        cout << year<<" is not a leap year"<<endl;
        cout << "==========================================" << endl;
    }
    return 0;
}
