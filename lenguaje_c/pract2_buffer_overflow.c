#include <stdio.h>
#include <string.h>

int main(void) {
  char buff[15];
  int pass = 0;

  printf("Ingrese la contraseña:\n");
  gets(buff);

  if (strcmp(buff, "udesa")) {
    printf("Contraseña incorrecta!\n");
  } else {
    printf("Contraseña correcta!\n");
    pass = 1;
  }

  if (pass) {
    printf("Verificación exitosa!\n");
    return 0;
  } else {
    return 1;
  }
}
