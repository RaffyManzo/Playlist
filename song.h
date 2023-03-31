#include "item.h"
typedef struct song *Song;

Song initSong(char *, char *, int);
char *getTitle(Song);
char *getArtistName(Song);
int getDuration(Song);