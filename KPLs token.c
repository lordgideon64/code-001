#include<stdio.h>
#include<math.h>

int main() {

    int customerID;
    char customerName[30];
    float unitconsumed;
    float chargesperunit;
    float totalbill;
    float surcharges;
    float totalamounttopay;


    printf("asalam aleikum welcome to KPLC company Ltd\n");

    printf("\ninput customer ID: ");
    scanf("%d", &customerID);

    printf("\ninput customer name: ");
    scanf("%s", &customerName);

    printf("\ninput unit consumed: ");
    scanf("%f", &unitconsumed);

    if(unitconsumed <200)
    {
        chargesperunit = 1.20;
    }
    else if(unitconsumed >= 200 && unitconsumed <= 400)
    {
        chargesperunit = 1.50;
    }
    else if(unitconsumed > 400 && unitconsumed <= 600)
    {
        chargesperunit = 1.80;
    }
    else
    {
        chargesperunit = 2.00;
    }

    totalbill = unitconsumed * chargesperunit;



    if(totalbill > 400);
    {

      surcharges= totalbill * 15/100;
    }
      printf("surcharges:%f\n", surcharges);
      totalamounttopay =surcharges + totalbill;

    printf("customer ID: %d\n",customerID);
    printf("customer name: %s\n",customerName);
    printf("unit consumed: %f\n",unitconsumed);
    printf("charges per unit:%f\n", chargesperunit);
    printf("total amount to pay:%f\n", totalamounttopay);


    printf("thanks for staying with us ");

    return 0;
}