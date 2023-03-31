#include "song.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct song {
  char *title;
  int seconds;
  char *artistName;
} song;

Song initSong(char *title, char *artistName, int seconds) {
  Song song = malloc(sizeof(struct song));
  song->title = calloc(strlen(title) + 1, sizeof(char));
  song->artistName = calloc(strlen(artistName) + 1, sizeof(char));

  if (!song || !(song->title) || !(song->artistName))
    return NULL;
  else {
    strcpy(song->title, title);
    strcpy(song->artistName, artistName);

    song->seconds = seconds;

    return song;
  }
}

char *getTitle(Song song) { return song->title; }

char *getArtistName(Song song) { return song->artistName; }

int getDuration(Song song) { return song->seconds; }