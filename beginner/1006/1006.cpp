# include <iostream>
# include <iomanip>

int main(){
    float a, b, c, media;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    media = ((a*2)+(b*3)+(c*5))/(2+3+5);

    std::cout << "MEDIA = " << std::fixed << std::setprecision(1) << media << "\n";

}