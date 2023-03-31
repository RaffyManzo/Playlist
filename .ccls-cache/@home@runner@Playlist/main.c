#include "playlist.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  Playlist pl;
  char playlistName[50];

  printf("Inserisci un nome per la tua playlist: ");
  scanf("%s", playlistName);
  getchar();

  printf("\nCreo una playlist con nome %s...\n", playlistName);
  printf("\nInserisci nuove canzoni...\n\n");
  pl = newPlaylist(playlistName);
  printPlaylist(pl);
  if (pl) {
    for (int i = 0; i < 1; i++) {
      Song *s = inputItem();
      if (!s)
        exit(EXIT_FAILURE);
      int currentSizePlaylist = playlistSize(pl);
      addSongToHead(pl, *s);
      if (currentSizePlaylist < playlistSize(pl))
        printf("La canzone è stata aggiunta con successo.");
    }
    printf("\n\nOra stampo la playlist: \n");
    printPlaylist(pl);
  } else {
    printf("La playlist non è stata creata, il programma verra' chiuso.");
    exit(EXIT_FAILURE);
  }
}