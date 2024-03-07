#include "major1.h"

#define MAIN_PROMPT "Enter a 32-bit number (>= 1 and <= 4294967295, inclusively):"
#define ROTATE_RIGHT_PROMPT "Enter the number of positions to rotate-right the input (between 0 and 31,inclusively):"
#define EXIT_MSG "Exitting...."
#define ERROR_INVALID_MENU_OPTION_MSG "Error: Invalid menu option. Please try again."
#define ERROR_INVALID_INPUT_MSG "Error: Invalid input. Please enter a valid number.."
uint32_t getUnsignedInt32(const char* prompt)
{
    uint32_t value;
    while (TRUE)
    {
        if(prompt != NULL){
            printf("%s\n", prompt);
        }
        printf("--> ");
        if (scanf("%u", &value) == 1)
        {
            return value;
        }
        printf("%s\n",ERROR_INVALID_INPUT_MSG);
        // Clear the input buffer
        while (getchar() != '\n');
    }
}

int main()
{
    while (TRUE)
    {
        printf("Enter the menu option for the operation to perform:\n");
        printf("(1) Count Leading Zeroes\n");
        printf("(2) Endian Swap\n");
        printf("(3) Rotate-right\n");
        printf("(4) Parity\n");
        printf("(5) EXIT\n");
        uint32_t menuOption = getUnsignedInt32(NULL);
        uint32_t value = 0;
        switch (menuOption)
        {
        case 1:
        {
            value = getUnsignedInt32(MAIN_PROMPT);
            printf("The number of leading zeroes in %u is %u\n", value,count_leading_zeroes(&value));
        }
        break;
        case 2:
        {
            value = getUnsignedInt32(MAIN_PROMPT);
            printf("Endian swap of %u gives %u\n", value, EndianSwap(&value));
        }
        break;
        case 3:
        {
            value = getUnsignedInt32(MAIN_PROMPT);
            uint32_t value2 = 32;
            while (value2 < 0 || value2 > 31)
            {
                value2 = getUnsignedInt32(ROTATE_RIGHT_PROMPT);
            }
            printf("%u rotated by %u position is: %u\n", value,value2,RotateRight(&value,&value2));
        }
        break;
        case 4:
        {
            value = getUnsignedInt32(MAIN_PROMPT);
            printf("Parity of %u is %u\n", value,Parity(&value));
        }
        break;
        case 5:
        {
            printf("%s\n",EXIT_MSG);
            exit(0);
        }
        break;
        default:
            printf("%s\n",ERROR_INVALID_MENU_OPTION_MSG);
            break;
        }
    }
    return 0;
}
