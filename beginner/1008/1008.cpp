# include <iostream>
# include <iomanip>

int main(){
    int number, worked_hours;
    float amount_hour, salary;

    std::cin >> number;
    std::cin >> worked_hours;
    std::cin >> amount_hour;

    salary = worked_hours*amount_hour;

    std::cout << "NUMBER = " << number << "\n";
    std::cout << "SALARY = U$ " << std::fixed << std::setprecision(2) << salary << "\n";

}