#include <iostream>

int main(){
    int var0 = 0,var1 = 10, var2 = 5;

    var0 = var1 + var2;
    std::cout << var0 << std::endl;

    var0 = var1 - var2;
    std::cout << var0 << std::endl;

    var0 = var1 * var2;
    std::cout << var0 << std::endl;

    var0 = var1 / var2;
    std::cout << var0 << std::endl;

    var0 = var1 % var2;
    std::cout << var0 << std::endl;

    if (var1 < var2)
    std::cout << "first" << std::endl;

    else if (var1 > var2)
    std::cout << "second" << std::endl;

    else
    std::cout << "third" << std::endl;

    return 0;
}