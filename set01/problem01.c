#include <stdio.h>
#include <string.h>
void input_string(char* a, char* b){
  printf("pls enter a str: ");
  scanf("%s",a);
  printf("pls nter a str: ");
  scanf("%s",b);
}

int sub_str_index(char* string, char* substring){
  int lens=strlen(substring);
  int sum;
  for(int i=0;string[i]!='\0';i++)
    for(int j=0;substring[j]!='\0';j++)
      if(string[i]==substring[j]){
      sum+=1;
      }
  if(sum==lens){
    return 0;
  }
  return 1;
  }

void output(int index){
  if(index==0){
    printf("substring is found in string");
  }
  else{
    printf("substring isnt found within string");
  }
}

int main(){
char a[100],b[100];
  input_string(a,b);
  int index=sub_str_index(a,b);
  output(index);
}