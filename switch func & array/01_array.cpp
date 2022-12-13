// #include<iostream>
// using namespace std;

// int main(){
// int num[5]={ [0 . . . 4 ] = 3 };  
//     cout<<num[2];
//     return 0;
// }



#include<iostream>
using namespace std;

int main() {
    int a[100];

    //To initialize the array with value'1'.
    fill_n(a, 100, 1);

    //To check the array input 
    for(int i = 0; i <= 5; i++){
        cout << a[i] << endl;
    }

}