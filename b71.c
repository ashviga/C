#include <stdio.h>
#include<math.h>

int main()
{
  char ch[20];
    int i, length;
    int f= 0;
    
    
    scanf("%s", ch);
    
    length = strlen(ch);
    
    for(i=0;i < length ;i++){
        if(ch[i] != ch[length-i-1]){
            f= 1;
            break;
   }
}
    
    if (f) {
        printf(" not palindrome");
    }    
    else {
        printf("a palindrome");
    }
    return 0;
}
