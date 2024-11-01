#include <iostream>


class train {
    public:
        std::string pnr;
        int conpart;
        int seat;
};
class enes {
    public:
        bool izin;
        std::string bagirsak;
        std::string asus;
        int saklikoy_sayisi;
};
struct yigit
{
    int age = 19;
    float gpa= 4.0;
    std::string surname = "demir";
};

int main(){
    train izmit;
    enes demirezen;
    /*izmit.pnr = "something";
    izmit.conpart = 4;
    izmit.seat=9;
    std::cout<<izmit.pnr<<'\n';
    std::cout<<izmit.conpart<<'\n';
    std::cout<<izmit.seat<<'\n';
    */
    demirezen.izin = 0;
    demirezen.bagirsak = "rezil";
    demirezen.asus = "daha rezil";
    demirezen.saklikoy_sayisi = 0;
    demirezen.saklikoy_sayisi += 5;
    std::cout<<demirezen.izin<<'\n'<<demirezen.bagirsak<<'\n'<<demirezen.asus<<'\n'<<demirezen.saklikoy_sayisi;
    std::cout<< ;
    return 0;

}
