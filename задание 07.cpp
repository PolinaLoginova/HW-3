#include <iostream>
using namespace std;

int main() {

int a,k;
cin >> a >> k;

int amount = 0; //количество цифр в записи данной системы счисления
for (int i = k; i < a; i*=k){
amount ++;
}
amount ++;

int*arr = new int [amount];
for (int i = 0; i < amount; i++){
*(arr + i) = a%k;
a /= k;
}

for (int i = amount - 1; i >=0; i--){
cout << *(arr + i);
}
return 0;
}
