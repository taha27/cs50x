#include <cs50.h>
#include <stdio.h>

#define GALLONS_PER_MINUTE 1.5
#define OUNCES_PER_GALLON 128
#define OUNCES_PER_BOTTLE 16

int find_shower_equivalent(int shower_minutes);

int main(void)
{
        printf("Minutes: ");
        int minutes = get_int();
        
        printf("Bottles: %i\n", find_shower_equivalent(minutes));
}

//find the equivalent of water used, in terms of water bottles, during a shower
int find_shower_equivalent(int shower_minutes)
{
        //quantity of water used during the shower, in ounces
        int shower_water_quantity = shower_minutes * GALLONS_PER_MINUTE * OUNCES_PER_GALLON;
        
        //returns the quantity of water used in terms of number of water bottles
        return shower_water_quantity / OUNCES_PER_BOTTLE;
}
