/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P2)
Full Name  :Aditya Mahesh Tambe
Student ID#:171969223
Email      :amtambe@myseneca.ca
Section    :ZHH
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/




#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    const double TAX = 0.13;
    const char PattySize = 'S', SallySize = 'M', TommySize = 'L';
    double Small_Size;
    double Medium_Size;
    double Large_Size;
    int PattyNUM;
    int TommyNUM;
    int SallyNUM;
    int SubTotalp;
    int TAX_Price;
    int TOTAL_Price;
    int Sub_Totals, Taxes, totals;
    int Sub_Totalt, taxt, totalt;
    int fsubTotal, ftax, ftotal;
    int tooniesTotal, looniesTotal, quarterTotal, dimesTotal, nickelsTotal, penniesTotal;
    int remtoon, remloon, remquarter, remdime, remnickel, rempenni;
    int avrg, fnumber, avrgwtax;
    int toonTotal, loonTotal, quartTotal, dimeTotal, nickTotal, penniTotal;
    int remtoonies, remloonies, remquarters, remdimes, remnickels, rempennis;




    printf("Set Shirt Prices");
    printf("\n================");
    printf("\nEnter the price for a SMALL shirt: $");
    scanf("%lf", &Small_Size);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &Medium_Size);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &Large_Size);


    printf("\nShirt Store Price List");
    printf("\n======================");
    printf("\nSMALL  : $%0.2lf", Small_Size);
    printf("\nMEDIUM : $%0.2lf", Medium_Size);
    printf("\nLARGE  : $%0.2lf", Large_Size);




    printf("\n\nPatty's shirt size is '%c'", PattySize);
    printf("\nNumber of shirts Patty is buying: ");
    scanf("%d", &PattyNUM);
    printf("\nTommy's shirt size is '%c'", TommySize);
    printf("\nNumber of shirts Tommy is buying: ");
    scanf("%d", &TommyNUM);
    printf("\nSally's shirt size is '%c'", SallySize);
    printf("\nNumber of shirts Sally is buying: ");
    scanf("%d", &SallyNUM);


    SubTotalp = (Small_Size * 100) * PattyNUM;
    TAX_Price = (SubTotalp * TAX) + 0.5;
    TOTAL_Price = SubTotalp + TAX_Price;
    Sub_Totals = (Medium_Size * 100) * SallyNUM;
    Taxes = (Sub_Totals * TAX) + 0.5;
    totals = Sub_Totals + Taxes;
    Sub_Totalt = (Large_Size * 100) * TommyNUM;
    taxt = (Sub_Totalt * TAX) + 0.5;
    totalt = Sub_Totalt + taxt;
    fsubTotal = SubTotalp + Sub_Totals + Sub_Totalt;
    ftax = TAX_Price + Taxes + taxt;
    ftotal = TOTAL_Price + totals + totalt;





    printf("\nCustomer Size Price Qty Sub-Total       Tax     Total");
    printf("\n-------- ---- ----- --- --------- --------- ---------");
    printf("\nPatty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf", PattySize,
        Small_Size, PattyNUM, (double)SubTotalp / 100, (double)TAX_Price / 100, (double)TOTAL_Price / 100);
    printf("\nSally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf", SallySize,
        Medium_Size, SallyNUM, (double)Sub_Totals / 100, (double)Taxes / 100, (double)totals / 100);
    printf("\nTommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf", TommySize,
        Large_Size, TommyNUM, (double)Sub_Totalt / 100, (double)taxt / 100, (double)totalt / 100);
    printf("\n-------- ---- ----- --- --------- --------- ---------");
    printf("\n%33.4lf %9.4lf %9.4lf", (double)fsubTotal / 100, (double)ftax / 100, (double)ftotal / 100);





    tooniesTotal = fsubTotal / 2;
    remtoon = fsubTotal % 200;
    looniesTotal = remtoon / 1;
    remloon = remtoon % 100;
    quarterTotal = remloon / 0.25;
    remquarter = remloon % 25;
    dimesTotal = remquarter / 0.10;
    remdime = remquarter % 10;
    nickelsTotal = remdime / 0.50;
    remnickel = remdime % 05;
    penniesTotal = remnickel / 0.01;
    rempenni = remnickel % 1;
    fnumber = PattyNUM + TommyNUM + SallyNUM;
    avrg = (fsubTotal * 1000) / fnumber + 0.5;





    printf("\n\nDaily retail sales represented by coins");
    printf("\n=======================================");
    printf("\n\nSales EXCLUDING tax");
    printf("\nCoin     Qty   Balance");
    printf("\n-------- --- ---------");
    printf("\n%22.4lf", (double)fsubTotal / 100);
    printf("\nToonies  %3d %9.4lf", tooniesTotal / 100, (double)remtoon / 100);
    printf("\nLoonies  %3d %9.4lf", looniesTotal / 100, (double)remloon / 100);
    printf("\nQuarters %3d %9.4lf", quarterTotal / 100, (double)remquarter / 100);
    printf("\nDimes    %3d %9.4lf", dimesTotal / 100, (double)remdime / 100);
    printf("\nNickels  %3d %9.4lf", nickelsTotal / 100, (double)remnickel / 100);
    printf("\nPennies  %3d %9.4lf", penniesTotal / 100, (double)rempenni / 100);
    printf("\n\nAverage cost/shirt: $%2.4lf", (double)avrg / 100000);





    toonTotal = ftotal / 2;
    remtoonies = ftotal % 200;
    loonTotal = remtoonies / 1;
    remloonies = remtoonies % 100;
    quartTotal = remloonies / 0.25;
    remquarters = remloonies % 25;
    dimeTotal = remquarters / 0.10;
    remdimes = remquarters % 10;
    nickTotal = remdimes / 0.05;
    remnickels = remdimes % 05;
    penniTotal = remnickels / 0.01;
    rempennis = remnickels % 1;
    avrgwtax = (ftotal * 1000) / fnumber + 0.5;




    printf("\n\nSales INCLUDING tax");
    printf("\nCoin     Qty   Balance");
    printf("\n-------- --- ---------");
    printf("\n%22.4lf", (double)ftotal / 100);
    printf("\nToonies  %3d %9.4lf", toonTotal / 100, (double)remtoonies / 100);
    printf("\nLoonies  %3d %9.4lf", loonTotal / 100, (double)remloonies / 100);
    printf("\nQuarters %3d %9.4lf", quartTotal / 100, (double)remquarters / 100);
    printf("\nDimes    %3d %9.4lf", dimeTotal / 100, (double)remdimes / 100);
    printf("\nNickels  %3d %9.4lf", nickTotal / 100, (double)remnickels / 100);
    printf("\nPennies  %3d %9.4lf", penniTotal / 100, (double)rempennis / 100);
    printf("\n\nAverage cost/shirt: $%2.4lf", (double)avrgwtax / 100000);
    printf("\n");


    return 0;
}