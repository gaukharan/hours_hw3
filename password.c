#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}


bool valid(string password)
{
    bool has_upper = false;
    bool has_lower = false;
    bool has_digit = false;
    bool has_symbol = false;

    for (int i = 0; password[i] != '\0'; i++)
    {
        switch (password[i])
        {
            case 'A'...'Z':
                has_upper = true;
                break;
            case 'a'...'z':
                has_lower = true;
                break;
            case '0'...'9':
                has_digit = true;
                break;
            default:
                has_symbol = true;
        }
    }

    return has_upper && has_lower && has_digit && has_symbol;
}
