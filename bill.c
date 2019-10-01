#include <stdio.h>
int main()
{
    float units,amount;
    scanf("%f", &units);
    if(units<=200){
        amount= 0.5*units;
    }else if(units<=400){
        amount= 100+0.65*units;
    }else if(units<=600){
        amount= 260+0.8*units;
    }else if(units<=800){
        amount= 480+units;
    }else{
        amount= units;
    }
    printf("%f", amount);
    return 0;
}
