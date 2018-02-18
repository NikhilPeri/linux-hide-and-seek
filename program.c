#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int run_up() {
  int p_id = fork();
  int runit = setsid();
  FILE *random_file;
  int cntr = 0;
  for (;;) {
    cntr++;
    if (cntr > INT_MAX/8){
      cntr = 0;
      printf("you cannot kill me!!\n");
      char file_name[20];
      sprintf(file_name, "%i-delete.me", rand()%10000);
      random_file = fopen(file_name, "w+");
      fprintf(random_file, "delete me....without deleting the whole folder");
      fclose(random_file);
    }
  }
}

int main() {
  printf("Running...");
  FILE *input;
  FILE *output;
  input = fopen("./input.txt", "r");
  if (input == NULL) {
    printf("YOU SKIPPED STEP 1!!!!!");
    return 0;
  } else {
    printf("don run random code from the internet!");
    printf("writing to the output");
    output = fopen("./output.txt", "w");
    for (int i = 0; i < 1000*(rand()%50); i++) {
      fprintf(output, "Not the secret\n");
    }
    fprintf(output, "SECRET JACUZZI\n");
    for (int i = 0; i < 1000*(rand()%50); i++) {
      fprintf(output, "Not the secret\n");
    }
    fclose(output);
    fclose(input);
  }

  run_up();

  return 0;
}
