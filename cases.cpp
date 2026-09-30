//#include <ctype.h>
//islower() → checks if lowercase
//isupper() → checks if uppercase
//isspace() → checks if whitespace
//isdigit() → checks if digit
//isalpha() → checks if alphabet/letter

#include <stdio.h>
#include <ctype.h>
int main(){
    char word;
    printf("Enter the character: ");
    scanf("%c",&word);
    if(islower(word)){
        printf("Lowercase");
    }
    return 0;
}



#include <stdio.h>
#include <ctype.h>
int main(){
    char word;
    printf("Enter the character: ");
    scanf("%c",&word);
    if(isupper(word)){
        printf("UPPER CASE");
    }
    else if(islower(word)){
        printf("lowercase");
    }
    else{
        printf("Invalid");
    }
    return 0;
}



#include <stdio.h>
#include <ctype.h>
int main(){
    char num;
    printf("Enter the number: ");
    scanf("%c",&num);
    if(isdigit(num)){
        printf("Is Digit");
    }
    else{
        printf("Invalid");
    }
    return 0;
}



#include <stdio.h>
#include <ctype.h>
int main(){
    char word;
    printf("Enter the character: ");
    scanf("%c",&word);
    if(isalpha(word)){
        printf("Alphabet");
    }
    else{
        printf("Not an Alphabet");
    }
    return 0;
}



#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isspace(ch))
    {
        printf("It is whitespace");
    }
    else
    {
        printf("It is not whitespace");
    }
    return 0;
}