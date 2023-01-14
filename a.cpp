// print all divisors

#include<iostream>
using namespace std;

/*int main(){
    int num;
    cin >> num;
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            cout << i << " ";
        }
    }
    return 0;
}*/

/*other way

36 --> 

1 x 36           --> i and (n/i)
2 x 18
3 x 12
4 x 9
6 x 6
.................sqrt(n)
9 x 4
12 x 3
18 x 2
36 x 1*/

int main(){
    int num;
    cin >> num;
    
    for(int i = 1; i*i <=num; i++){         // i*i < num other way to write i < sqrt(n)
    // saves time of calling function from another file.
        if(num % i == 0){
            cout << i << " ";
            if((num/i) != i){
                cout << (num/i) << " ";
            }
        }
    }
    return 0;
}

// If you need to print it in sorted manner for second method store it in a vector and sort it.


