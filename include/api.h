#include "struct.h"

#include "json.h"

#include <stdlib.h>
#include <string.h>

#ifndef API_H
#define API_H

// create a new board
char *board_new (const char *);

// all boards list
char *board_list (const char *);
char *board_length (void);

// all posts of one board
char *board_post_list (const char *);
char *board_post_length (const char *);

// all inner posts of a board
char *board_inner_post_list (const char *);
char *board_inner_post_length (const char *);

// favorite boards list of a user
char *user_fav_list (const char *);
char *user_fav_list_length (const char *);

// load or save a post, save if aid_index = -1
char *board_post_path (const char *);

// the list of nodes belong to given class path
char *class_items_list (const char *);

// UTF8 testing
char *utf8_test (const char *);

#endif /* API_H */
