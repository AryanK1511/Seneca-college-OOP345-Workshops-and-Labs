#ifndef SDDS_TOY_H
#define SDDS_TOY_H

#include <iostream>

namespace sdds {
    class Toy {
    private:
        int t_orderID{};
        std::string t_name {};
        int t_numberOfItems {};
        double t_price {};
        double t_hstPercentage{ 13 };
    public:
        // Default Constructor
        Toy() = default;

        // Responsible for extracting information about the toy and storing the tokens in the instance's attributes
        Toy(const std::string& toy);

        // Updates the number of items attribute with the received value
        void update(int numItems);

        // Insert the contents of a toy object into an ostream object
        friend std::ostream& operator<<(std::ostream& os, const Toy& toy);
    };
}

#endif //PART_1_TOY_H