#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
  int j = 0;
  int AVariable[4] = {0, 0, 1, 1};
  int BVariable[4] = {0, 1, 0, 1};
  int numberOfColoumns = 4;
  char inputLGate[100];
  char ch;

  printf("Input Logic Gate do you want to use:\n");
  scanf("%s", inputLGate);

  while (inputLGate[j])
  {
    ch = inputLGate[j];
    inputLGate[j] = toupper(ch);
    j++;
  }

  if (strcmp(inputLGate, "AND") == 0 || strcmp(inputLGate, "OR") == 0 || strcmp(inputLGate, "NOT") == 0 ||
      strcmp(inputLGate, "NOR") == 0 || strcmp(inputLGate, "NAND") == 0 ||
      strcmp(inputLGate, "XOR") == 0 || strcmp(inputLGate, "XNOR") == 0)
  {
    printf("A B        %s(A,B)\n", inputLGate);

    if (strcmp(inputLGate, "AND") == 0)
    {
      for (int i = 0; i < numberOfColoumns; i++)
      {
          int result = AVariable[i] * BVariable[i];
          printf("%d %d        %d\n", AVariable[i], BVariable[i], result);
      }
    }

    if (strcmp(inputLGate, "OR") == 0)
    {
      for (int i = 0; i < numberOfColoumns; i++)
      {
          int result = AVariable[i] == BVariable[i] ? AVariable[i] == 0 && BVariable[i] == 0 ? 0 : 1 : AVariable[i] + BVariable[i];
          printf("%d %d        %d\n", AVariable[i], BVariable[i], result);
      }
    }

    if (strcmp(inputLGate, "NOT") == 0)
    {
      for (int i = 0; i < numberOfColoumns; i++)
      {
          int result = AVariable[i] == 1 ? 0 : 1;
          printf("%d           %d\n", AVariable[i], result);
      }
    }

    if (strcmp(inputLGate, "NOR") == 0)
    {
      for (int i = 0; i < numberOfColoumns; i++)
      {
          int result = AVariable[i] == BVariable[i] ? AVariable[i] == 0 && BVariable[i] == 0 ? 0 : 1 : AVariable[i] + BVariable[i];
          int cResult = result == 1 ? 0 : 1;
          printf("%d           %d\n", AVariable[i], cResult);
      }
    }

    if (strcmp(inputLGate, "NAND") == 0)
    {
      for (int i = 0; i < numberOfColoumns; i++)
      {
          int result = AVariable[i] * BVariable[i];
          int cResult = result == 1 ? 0 : 1;
          printf("%d           %d\n", AVariable[i], cResult);
      }
    }

    if (strcmp(inputLGate, "XOR") == 0)
    {
      for (int i = 0; i < numberOfColoumns; i++)
      {
          int XORresult = AVariable[i] == BVariable[i] ? 0 : AVariable[i] + BVariable[i];
          printf("%d           %d\n", AVariable[i], XORresult);
      }
    }

    if (strcmp(inputLGate, "XNOR") == 0)
    {
      for (int i = 0; i < numberOfColoumns; i++)
      {
          int XORresult = AVariable[i] == BVariable[i] ? 0 : AVariable[i] + BVariable[i];
          int cResult = XORresult == 1 ? 0 : 1;
          printf("%d           %d\n", AVariable[i], cResult);
      }
    }
  }
  else
  {
    printf("You have entered to an undentified logic gate\n");
  }
}
