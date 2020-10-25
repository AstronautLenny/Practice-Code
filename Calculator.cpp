#include <iostream>


int main(){
    int x,y, op;
    char choice;

do{

    std::cout<<"\nLenny's Four Function Calculator! \n";
    std::cout<<"To Use Calculator, type first # as x, type second # as y, then type the # corresponding to the operation you want.\n \n";
    std::cout<<"1. Add (x+y)\n2. Subtract (x-y)\n3. Multiply (x*y)\n4. Divide (x/y)\n \n";
    std::cout<<"x = ";
    std::cin>> x;
    std::cout<<"y = ";
    std::cin>> y;
    std::cout<<"Operation # ?:";
    std::cin>> op;
    float div = 1.0*x/y; //Why does this work to bring out decimal on division?
    switch (op){
        case 1:
        std::cout<<(x+y);
        break;
        case 2:
        std::cout<<(x-y);
        break;
        case 3:
        std::cout<<(x*y);
        break;
        case 4:
        std::cout<<(div);
        break;
    }
    std::cout<< "\nWant to Calculate Again? (Y/N):  ";
    std::cin>>choice;

    }while(choice=='y'|| choice=='Y');
std::cout<<"\nGoodbye\n";
    return 0;
}
