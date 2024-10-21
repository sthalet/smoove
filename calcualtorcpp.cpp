#include <iostream>

int main() {
    double A,B;
    char type;
    std::cout <<"enter a symbol";
    std::cin >> type;
    std::cout<<"enter the first number";
    std::cin>>A;
    std::cout<<"enter the second number";
    std::cin>>B;
    switch (type) {
        case '+':
            std::cout<<A + B;
            break;
        case '-':
            std::cout<< A - B;
            break;
        case '/':
            std::cout<<A/ B;
            break;
        case '*':
            std::cout<<A * B;
            break;
        default:
            std::cout<<"please enter valid data";
            break;
    }
    return 0;
}