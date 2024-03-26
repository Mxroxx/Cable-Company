#include<iostream>

int main() {
    char customerType;
    int premiumChannels, basicConnections;
    double billProcessingFee, basicServiceFee, premiumChannelCost;
    double totalBill = 0.0;

    // Input customer type
    std::cout << "Enter customer type (R for Residential, B for Business): ";
    std::cin >> customerType;

    // Calculate bill based on customer type
    if (customerType == 'R' || customerType == 'r') {
        billProcessingFee = 4.50;
        basicServiceFee = 20.50;
        premiumChannelCost = 7.50;

        // Input premium channels for residential customers
        std::cout << "Enter number of premium channels: ";
        std::cin >> premiumChannels;

        // Calculate total bill for residential customers
        totalBill = billProcessingFee + basicServiceFee + (premiumChannelCost * premiumChannels);
    } else if (customerType == 'B' || customerType == 'b') {
        billProcessingFee = 15.00;
        basicServiceFee = 75.00;
        premiumChannelCost = 50.00;

        // Input basic service connections for business customers
        std::cout << "Enter number of basic service connections: ";
        std::cin >> basicConnections;

        // Calculate total bill for business customers
        if (basicConnections <= 10) {
            totalBill = billProcessingFee + basicServiceFee;
        } else {
            totalBill = billProcessingFee + basicServiceFee + (basicConnections - 10) * 5.0;
        }
        
        // Input premium channels for business customers
        std::cout << "Enter number of premium channels: ";
        std::cin >> premiumChannels;

        // Add premium channel cost to the total bill for business customers
        totalBill += premiumChannels * premiumChannelCost;
    } else {
        std::cout << "Invalid customer type!";
        return 1;
    }

    // Display the total bill
    std::cout << "Total bill: $" << totalBill << '\n';

    return 0;
}
