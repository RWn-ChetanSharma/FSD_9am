#include <stdio.h>

int main() {
    float unit, charges;

    printf("Enter electricity units: ");
    scanf("%f", &unit);

    if (unit > 0 && unit <= 50) {
        charges = unit * 0.50;
    } else if (unit > 50 && unit <= 150) {
        charges = unit * 0.75;
    } else if (unit > 150 && unit <= 250) {
        charges = unit * 1.20;
    } else if (unit > 250) {
        charges = unit * 1.50;
    } else {
        printf("Enter Valid Unit");
        return 0;
    }
    
    // Apply 20% discount
    charges += charges * 0.20;

    printf("Electricity Bill = RS. %.2f", charges);

    return 0;
}
