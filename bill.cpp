//BILL USING CONDITIONAL OPERATOR ONLY
#include <stdio.h>
int main()
{
	float u,amt;//variable for units consumed and amount
	printf("Enter units consumed = ");
	scanf("%f",&u);
	amt=u<=200?0.5*u:(u<=400?100+0.65*u:(u<=600?260+0.8*u:(u<=800?480+u:500+u)));
    printf("Your bill amount is = %f",amt);
    return 0;
}
