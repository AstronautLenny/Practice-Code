#include <iostream>

int main(){
    int total, a, b, c, d, e, x;
    a=0;
    b=0;
    c=0;
    d=0;
    e=0;
    total= 25 -x;

    std::cout<< "Who are you? Choose your stats (All Stats Can Add To Max of 25) \n\n";
    std::cout<< "-Health Points (HP)\n-Defense Points (DP)\n-Attack Points (AP)\n-Charisma Points (CP)\n-Speed Points (SP)\n\nTotal Points Left: ";
    std::cout<< total <<std::endl ;

        std::cout<<"\nHP: ";
        std::cin>>a;

        while (25-x>0){
            x= (a+b+c+d+e);
            if (25-x<0){
                std::cout<<"Not Enough Points For That Use Less: ";
                std::cin>> a;
                std::cout<<a;

            }
            break;
        }
        x= (a+b+c+d+e);
        total= 25 -x;
        std::cout<< "Total Points Remaining: "<<total <<"\n\n";

        std::cout<<"DP: ";
        std::cin>>b;
         x= (a+b+c+d+e);
        total= 25 -x;
        std::cout<< "Total Points Remaining: "<<total <<"\n\n";

        std::cout<<"AP: ";
        std::cin>>c;
         x= (a+b+c+d+e);
        total= 25 -x;
        std::cout<< "Total Points Remaining: "<<total <<"\n\n";

        std::cout<<"CP: ";
        std::cin>>d;
         x= (a+b+c+d+e);
        total= 25 -x;
        std::cout<< "Total Points Remaining: "<<total <<"\n\n";

        std::cout<<"SP: ";
        std::cin>>e;
         x= (a+b+c+d+e);
        total= 25 -x;
        std::cout<< "Total Points Remaining: "<<total <<"\n\n";

        std::cout<< "Your Stats Are: \n" <<"HP: "<<a <<"\n" << "DP: "<<b <<"\n" << "AP: "<<c <<"\n" << "CP: "<<d <<"\n" << "SP: "<<e <<"\n";




 return 0;
}
