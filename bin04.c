#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
  char s[101];
  char output[101] = "";
  int i, j = 0;
  printf("Enter: s = ");
  fgets(s, sizeof(s), stdin);
  s[strcspn(s, "\n")] = '\0';
  for (i = 0; s[i] != '\0'; i++) {
    if (isalpha(s[i]) || isspace(s[i])) {
      output[j] = s[i];
      j++;
    }
  }
  output[j] = '\0'; 
  printf("OUTPUT:\n%s\n", output);

  return 0;
}
