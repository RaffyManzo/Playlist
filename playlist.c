#include "playlist.h"
#include "song.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct playlist {
  char *name;
  List songs;
} playlist;

Playlist newPlaylist(char *name) {
  Playlist pl = malloc(sizeof(struct playlist));
  if (pl) {
    pl->name = calloc(strlen(name) + 1, sizeof(char));
    if (pl->name) {
      pl->songs = newList();

      if (pl->songs)
        return pl;
    }
  }

  return NULL;
}

void addSongToHead(Playlist pl, Song s) { addHead(pl->songs, s); }

void printPlaylist(Playlist pl) { printList(pl->songs); }

void RemoveSongByName(Playlist pl, Song s) {
  if (removeListItem(pl->songs, s))
    printf("\nCanzone eliminata dalla playlist con successo.");
  else
    printf("\nCanzone inesistente nella playlist.");
}

int playlistSize(Playlist pl) { return sizeList(pl->songs); }