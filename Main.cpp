#include "stdio.h"
int ipToDecimal(int one,int two,int three,int four) {
    return one*256*256*256 + two*256*256 + three*256 + four;
}

int main()
{
    int ip_one;
    int ip_two;
    int ip_three;
    int ip_four;

    printf("Primeiro numero:");
    scanf("%d", &ip_one);
    printf("Segundo numero:");
    scanf("%d", &ip_two);
    printf("Terceiro numero:");
    scanf("%d", &ip_three);
    printf("Quarto numero:");
    scanf("%d", &ip_four);

    int formated = ipToDecimal(ip_one,ip_two,ip_three,ip_four);

    if (ip_one >= 0 && ip_one <= 255 &&
        ip_two >= 0 && ip_two <= 255 &&
        ip_three >= 0 && ip_three <= 255 &&
        ip_four >= 0 && ip_four <= 255) {
        printf("Human-readable IP address is: %d.%d.%d.%d\n", ip_one, ip_two, ip_three, ip_four);
        printf("IP address as a 32-bit number: %d\n", formated);
        } else {
            printf("Incorrect IP Address\n");
        }
}

