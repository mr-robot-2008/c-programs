#include <stdio.h>
#include <sys/random.h>
 
int
randnum(int maxval)
{
  ...
}

int
main(void)
{
  int number;
  int guess;

  number = randnum(100);

  puts("Guess a number between 1 and 100");

  do {
    scanf("%d", &guess);

    if (guess < number) {
      puts("Too low");
    }
    else if (guess > number) {
      puts("Too high");
    }
  } while (guess != number);
   puts("That's right!");

  return 0;
}
