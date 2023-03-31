#include "item.h"
#include "song.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 50

Item inputItem() {
  char title[max], artistName[max];
  int seconds;

  printf("\nInserisci una il titolo: ");
  if (scanf("%[^\n]s", title)) {
    getchar(); // Consuma il carattere newline rimasto nel buffer

    printf("Inserisci il nome dell'artista: ");
    if (scanf("%[^\n]s", artistName)) {
      getchar(); // Consuma il carattere newline rimasto nel buffer

      printf("Inserisci la durata in secondi: ");
      if (scanf("%d", &seconds)) {
        getchar();
        return initSong(title, artistName, seconds);
      }
    }
  }

  return NULL;
}

void outputItem(Item a) {
  Song song = (Song)a;
  if (song == NULL) {
    printf("Errore.");
    exit(EXIT_FAILURE);
  }
  printf("\n > %d %s - %s\n", getDuration(song), getTitle(song),
         getArtistName(song));
}

int cmpItem(Item a, Item b) {
  Song s1 = a, s2 = b;

  return strcmp(getTitle(s1), getTitle(s2));
}