// Simple ATM Simulation Machine 

#include <stdio.h>
#include <string.h>

int main()
{
    int n, otp1,pin4, pin2, pin3;
    float otp =509484;
    float current_balance = 1000000.0, deposit_amount, withdraw_amount;
    const char pin[] = "8757";
    char pin1[10];
    printf("Please enter the pin to access your account\n");
    scanf("%s", pin1);
    if (strcmp(pin1, pin) == 0)
    {
        printf("you entered a correct pin. Access granted!\n");

        printf("Choose an option:\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Generate pin\n5. Change pin\n ");
        scanf("%d", &n);

        if (n == 1)
        {
            printf("The current balance is:1000000\n");
        }
        else if (n == 2)
        {
            printf("Enter Deposit amount:\n");
            scanf("%f", &deposit_amount);
            printf("%f\n", current_balance + deposit_amount);
        }
        else if (n == 3)

        {
            printf("Enter withdraw amount: \n");
            scanf("%f", &withdraw_amount);
            if (withdraw_amount > current_balance)
            {
                printf("Insufficient balance.\n");
            }
            else
            {
                printf("The new balance is  %f:\n", current_balance - withdraw_amount);
            }
        }
        else if (n == 4)
        {
            printf("please enter the OTP sent to your linked mobile number or e-mail\n");
            scanf("%d", &otp1);
            if (otp == otp1)
            {
                printf("Enter the new pin.\n");
                scanf("%d", &pin4);

                printf("The pin generated successfully.\n The new pin is: %d\n", pin4);
            }
            else
            {
                printf("you entered a wrong otp.\n TRY AGAIN!\n");
            }
        }

        else if (n == 5)
        {
            printf("please enter the OTP sent to your linked mobile number or e-mail\n");
            scanf("%d", &otp1);

            if (otp == otp1)
            {
                printf("enter the new pin\n");
                scanf("%d", &pin2);

                printf("confirm the pin\n");
                scanf("%d", &pin3);

                if (pin2 == pin3)
                {
                    printf("congratulations!\nThe pin changed successfully.\n");
                }
                else
                {
                    printf("original pin and confirm pin do not match.\n TRY AGAIN\n");
                }
            }
            else
            {
                printf("you entered a wrong otp.\n TRY AGAIN!\n");
            }
        }
        else
        {
            printf(" Oops! you entered an invaid command.\nTHANK YOU\n");
        }
    }
    else
    {
        printf("oh no! You entered a wrong pin.\n Access denied\nEnter the pin again.\n");
    }

    return 0;
}