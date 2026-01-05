# include <iostream>
# include <iomanip>

int main(){
    double f1, f2, gdp;

    std::cin >> f1;
    std::cin >> f2;

    gdp = ((1+(f1/100))*(1+(f2/100))-1)*100;

    std::cout << std::fixed << std::setprecision(6) << gdp << "\n";
}