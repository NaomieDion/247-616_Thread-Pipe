/**
 * @file system_call.c
 * 
 * @brief   Exemple de code C pour des appels systèmes 
 *          (équivalent à une commande dans un émulateur de terminal, ou un script Bash)
 * 
 * @author  Kevin Cotton
 * @date    2024-08-02
 *
 */
#include <stdlib.h>
#include <stdio.h>

/**
 * Ce programme affiche avec la commande echo : processus 1, processus 3 et processus 5
 * utilise la commande sleep entre processus 1-3 pour attendre 10msec  
 *    ||   ||   ||      ||    ||      ||     3-5 pour attendre 5msec
 * Une fois les 5 processus terminer il va affiché : terminé
 * @return     0 
 */
int main() {
  system("echo \"processus 1 \""); 
  system("sleep 10"); // processus 2
  system("echo \"processus 3 \""); 
  system("sleep 5"); // processus 4
  system("echo \"processus 5 \""); 

  printf("\n terminé \n");
  return 0;
}

