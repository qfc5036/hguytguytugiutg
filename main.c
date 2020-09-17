// Author Qiaoxu Cui qfc5036@psu.edu
// Collaborator Zhili Bu zjh5625@psu.edu
// Collaborator: Shufang Huang sbh5655@psu.edu
// Collaborator: Isabel Vera ikv5018@psu.edu
#include <stdio.h>
#include <string.h>
#include <readline/readline.h>
int sum_n(int n){
  if (n == 0){
    return 0;
  }
  else{
    return n + sum_n(n-1);
  }
}
void print_n(const char *s, int n){
  if (n !=0){
    printf("%s\n",s);
    print_n(s,n-1);
  }
}

int main(void){
  int n1 = atoi(readline("Enter an int: "));
  printf("sum is %d.\n", sum_n(n1));
  char *string = readline("Enter a string: ");
  print_n(string,n1);
  return 0;
}