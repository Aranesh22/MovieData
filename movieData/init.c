#include "defs.h"

void initAllMovies(ListType *list1, ListType *list2)
{
  MovieType *m;

  initMovie("E.T. The Extra-Terrestrial", 1982, &m);
  addMovieToList(BY_TITLE, list1, m);
  initMovie("Metropolis", 1927, &m);
  addMovieToList(BY_TITLE, list1, m);
  initMovie("Gravity", 2013, &m);
  addMovieToList(BY_TITLE, list1, m);
  initMovie("Arrival", 2016, &m);
  addMovieToList(BY_TITLE, list1, m);
  initMovie("Star Wars: The Last Jedi", 2017, &m);
  addMovieToList(BY_TITLE, list1, m);
  initMovie("Alien", 1979, &m);
  addMovieToList(BY_TITLE, list1, m);
  initMovie("War for the Planet of the Apes", 2017, &m);
  addMovieToList(BY_TITLE, list1, m);
  initMovie("Wall-E", 2008, &m);
  addMovieToList(BY_TITLE, list1, m);
  initMovie("Star Trek", 2009, &m);
  addMovieToList(BY_TITLE, list1, m);
  initMovie("Terminator", 1984, &m);
  addMovieToList(BY_TITLE, list1, m);
  initMovie("Invasion of the Body Snatchers", 1956, &m);
  addMovieToList(BY_TITLE, list1, m);
  initMovie("The Day the Earth Stood Still", 1951, &m);
  addMovieToList(BY_TITLE, list1, m);
  initMovie("Jurassic Park", 1993, &m);
  addMovieToList(BY_TITLE, list1, m);
  initMovie("Back to the Future", 1985, &m);
  addMovieToList(BY_TITLE, list1, m);
  initMovie("Blade Runner", 1982, &m);
  addMovieToList(BY_TITLE, list1, m);

  initMovie("The Wizard of Oz", 1939, &m);
  addMovieToList(BY_TITLE, list2, m);
  initMovie("Citizen Kane", 1941, &m);
  addMovieToList(BY_TITLE, list2, m);
  initMovie("Casablanca", 1942, &m);
  addMovieToList(BY_TITLE, list2, m);
  initMovie("Psycho", 1960, &m);
  addMovieToList(BY_TITLE, list2, m);
  initMovie("King Kong", 1933, &m);
  addMovieToList(BY_TITLE, list2, m);
  initMovie("Rear Window", 1954, &m);
  addMovieToList(BY_TITLE, list2, m);
  initMovie("Rebecca", 1940, &m);
  addMovieToList(BY_TITLE, list2, m);
  initMovie("Vertigo", 1958, &m);
  addMovieToList(BY_TITLE, list2, m);
  initMovie("Lawrence of Arabia", 1962, &m);
  addMovieToList(BY_TITLE, list2, m);
  initMovie("The Grapes of Wrath", 1940, &m);
  addMovieToList(BY_TITLE, list2, m);
  initMovie("Chinatown", 1974, &m);
  addMovieToList(BY_TITLE, list2, m);
  initMovie("Gone with the Wind", 1939, &m);
  addMovieToList(BY_TITLE, list2, m);
  initMovie("Invasion of the Body Snatchers", 1956, &m);
  addMovieToList(BY_TITLE, list2, m);
  initMovie("It's a Wonderful Life", 1946, &m);
  addMovieToList(BY_TITLE, list2, m);
  initMovie("Doctor Zhivago", 1965, &m);
  addMovieToList(BY_TITLE, list2, m);
}

