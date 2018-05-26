
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
  char serialPortFilename[] = argv[1];
  char readBuffer[1024];
  int numBytesRead;

  FILE *serPort = fopen(serialPortFilename, "r");
  if (serPort == NULL)
  {

    printf("ERROR 0");
    return 0;
  
  }

  printf(serialPortFilename);
  printf(":\n");
  while(1)
  {
    memset(readBuffer, 0, 1024);
    fread(readBuffer, sizeof(char),1024,serPort);
    if(sizeof(readBuffer) != 0)
    {
      printf(readBuffer);
    }
  }
  return 0;
}
