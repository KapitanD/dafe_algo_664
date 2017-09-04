#include <iostream>
#include <algorithm>

int main(){
    int n;
    int mas[10013];
    std::cin >> n;
    for(int i = 1; i <= n; i++){
        std::cin >> mas[i];
    }
    for(int i = 1; i <= n/2; i++){
        std::swap(mas[i], mas[n - i + 1]);
    }
    for(int i = 1; i <= n; i++){
        std::cout<< mas[i] << ' ';
    }
}
