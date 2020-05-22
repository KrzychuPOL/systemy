bin_PROGRAMS = Projekt
Projekt_SOURCES = main.c obj.h pola.h
Projekt_DEPENDENCIES = libobj.la libpola.la
Projekt_LDADD = libobj.la libpola.la

lib_LTLIBRARIES = libpola.la libobj.la
libpola_la_SOURCES = pola.c
libpola_la_LDFLAGS = -static
libobj_la_SOURCES = obj.c
