#ifndef MedicineType.h
#define MedicineType .h
#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>

#define max 10
using namespace std;

class medicineType // base class
{
public:
    void take_order();    // to  take_order
    void delete_order();  // to delete the order
    void modify();        // to modify the order
    void order_list();    // to display the order_list
    void daily_summary(); // to display daily_summary
    void exit();          // function to exit system
    medicineType();       // constuctor
};

medicineType::medicineType()
{

} // constructor for class MedicineType
#endif