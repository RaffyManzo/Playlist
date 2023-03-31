#include "list.h"
#include "song.h"

typedef struct playlist *Playlist;

// Create a new list
Playlist newPlaylist(char *);
// Add an element in head position of the list
void addSongToHead(Playlist, Song);
int playlistSize(Playlist);
// return the size of the list
// print the list
void printPlaylist(Playlist);
// Search an item in the list and load his position in an variable
Song searchInPlaylistBySongName(Playlist, char *);
// remove ad return the element
void RemoveSongByName(Playlist, Song);
//  Order playlist by title songs name
void sortPlaylist(Playlist);