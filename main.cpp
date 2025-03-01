#include "Car.h"
#include "Motorbike.h"
#include "Dealership.h"
#include "Garage.h"

int main() {
    Dealership dealership;
    dealership.addVehicle(new Car("Toyota", "Corolla", 2020, 20000, 4));
    dealership.addVehicle(new Motorbike("Harley-Davidson", "Sportster", 2019, 15000, false));

    std::cout << "Dealership Vehicles:" << std::endl;
    dealership.displayAllVehicles();

    Garage garage;
    garage.addVehicle(new Car("Ford", "Mustang", 2018, 35000, 2));
    garage.addVehicle(new Motorbike("Yamaha", "YZF-R1", 2021, 18000, false));

    std::cout << "Garage Vehicles:" << std::endl;
    garage.displayAllVehicles();

    return 0;
}
