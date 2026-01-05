# include <iostream>
# include <iomanip>

int main(){
    double r, area;

    std::cin >> r;
    area = 3.14159 * (r*r);

    std::cout << "A=" << std::fixed << std::setprecision(4) << area << "\n";
}